/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:05:12 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/18 14:17:23 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Test.hpp"

Test::Test()
{
	_nb = 0;
}

Test::Test(int n)
{
	_nb = n;
}

Test::Test(Test &t)
{
	*this = t;
}

Test &Test::operator=(Test &t)
{
	if (this != &t)
		_nb = t._nb;
	return (*this);
}

Test::~Test()
{}

int Test::getNb(void) const
{
	return (_nb);
}

std::ostream &operator<<(std::ostream &o, const Test &p)
{
	o << p.getNb();
	return (o);
}

bool Test::operator==(Test const &a) const
{
	return (this->_nb == a._nb);
}

bool Test::operator!=(Test const &a) const
{
	return (this->_nb != a._nb);
}

bool Test::operator>(Test const &a) const
{
	return (this->_nb > a._nb);
}

bool Test::operator<(Test const &a) const
{
	return (this->_nb < a._nb);
}

bool Test::operator>=(Test const &a) const
{
	return (this->_nb >= a._nb);
}

bool Test::operator<=(Test const &a) const
{
	return (this->_nb <= a._nb);
}