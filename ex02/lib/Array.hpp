/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:21:24 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/19 15:42:59 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>

# define DEFAULT "\001\033[0;39m\002"
# define BOLD "\001\033[1;89m\002"
# define GREEN "\001\033[1;92m\002"
# define BLUE "\001\033[1;36m\002"
# define RED "\001\033[1;91m\002"

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array<T> &a);
		~Array(void);
		
		Array &operator=(const Array &a);
		
		T 	&operator[](const int ind) const;
		int	size(void) const;
				
	private:
		T	*_array;
		int	_n;
};

#endif