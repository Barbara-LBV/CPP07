/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:17:57 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/18 18:37:11 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void	iter(T *array, int length, void (*f)(const T &))
{
	for (int i = 0 ; i < length; i++)
	{
		f(array[i]);
	}
}

template<typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
	return;
}
