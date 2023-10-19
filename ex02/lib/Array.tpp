/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:58:01 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/19 15:43:16 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : _n(0), _array(NULL)
{
	std::cout << BOLD "Default constructor called." DEFAULT << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
	std::cout << BLUE "Overloaded constructor called." DEFAULT << std::endl;
	if (n <= 0)
		throw std::overflow_error(BOLD "Index out of bounds" DEFAULT);
	_array = new T[n];
}
		
template<typename T>
Array<T>::Array(const Array<T> &a)
{
	std::cout << GREEN "Copy constructor called." DEFAULT << std::endl;
	*this = a;
}
		
template<typename T>
Array<T> &Array<T>::operator=(const Array <T> &a)
{
	std::cout << GREEN "Assignment operator called" DEFAULT << std::endl;
	this->_array = new T[a._n];
	if (this != &a)
	{
		delete [] _array;
		_n = a.size();
		_array = new T[_n];
		for (int i = 0; i < _n; i++)
			_array[i] = a._array[i];
	}
	return (*this);
}
		
template<typename T>
Array<T>::~Array()
{
	std::cout << RED "Destructor called" DEFAULT << std::endl;
	if (this->_n > 0)
		delete [] _array;
}

template<typename T>
T &Array<T>::operator[](const int ind) const
{
	if (ind < 0 || ind >= _n)
		throw std::overflow_error(BOLD "Index is out of bound." DEFAULT);
	return (_array[ind]);
}

template<typename T>
int		Array<T>::size(void) const
{
	return (_n);
}
