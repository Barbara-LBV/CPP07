/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:21:41 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/18 18:11:47 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Temp.hpp"
#include "../lib/Test.hpp"

int main( void ) 
{
	int a = 2;
	int b = 3;
	
	swap<int>(a, b);
	std::cout << std::endl;
	std::cout << BOLD "*** Simple Types ***" DEFAULT << std::endl << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap<std::string>(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl << std::endl;

	std::cout << BOLD "*** Class Type ***" DEFAULT << std::endl << std::endl;

	Test e(2); 
	Test f(-3);
	
	::swap<Test>(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
	std::cout << "max(e, f) = " << ::max(e, f) << std::endl << std::endl;
	return 0;
}