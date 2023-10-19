/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temp.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:05:09 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/18 13:53:49 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void	swap(T &x, T &y)
{
	T tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T	const &min(T const &x, T const &y)
{
	return (x <= y ? x : y);
}

template <typename T>
T const	&max(T const &x, T const &y)
{
	return (x >= y ? x : y);
}