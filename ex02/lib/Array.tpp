/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:58:01 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/19 14:58:24 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array
{
	public:
		Array<T>(): _n(0), _array(NULL)
		{
			std::cout << BOLD "Default constructor called." DEFAULT << std::endl;
		}
		Array<T>(unsigned int n) : _n(n)
		{
			std::cout << "Overloaded constructor called." << std::endl;
			if (n <= 0)
				throw std::overflow_error("Index out of bounds");
			_array = new T[n];
		}
		Array<T>(const Array<T> &a)
		{
			std::cout << "Copy constructor called." << std::endl;
			*this = a;
		}
		Array<T> &operator=(const Array <T> &a)
		{
			std::cout << "Assignment operator called." << std::endl;
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
		};
		~Array<T>()
		{
			std::cout << "Destructor called." << std::endl;
			if (this->_n > 0)
				delete [] _array;
		};
		T &operator[](const int ind) const
		{
			if (ind < 0 || ind >= _n)
				throw std::overflow_error("Index is out of bound.");
			return (_array[ind]);
		}
		int		size(void) const
		{
			return (_n);
		}
				
	private:
		T	*_array;
		int	_n;
};

template<typename T>
std::ostream &operator<<(std::ostream &o, Array <T> const &p);