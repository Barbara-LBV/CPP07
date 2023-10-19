/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:21:24 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/18 14:17:28 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>
#include <string>

# define DEFAULT "\001\033[0;39m\002"
# define BOLD "\001\033[1;89m\002"

class Test
{
	public:
		Test();
		Test(int nn);
		Test(Test &o);
		Test &operator=(Test &o);
		~Test();

		int getNb(void) const;
		bool operator==(Test const &a) const;
		bool operator!=(Test const &a) const;
		bool operator>(Test const &a) const;
		bool operator<(Test const &a) const;
		bool operator>=(Test const &a) const;
		bool operator<=(Test const &a) const;
				
	private:
		int	_nb;
};

std::ostream &operator<<(std::ostream &o, const Test &p);

#endif