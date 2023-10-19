/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:27:41 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/18 18:40:22 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Test.hpp"
#include "../lib/Iter.hpp"

int main()
{
	std::string	t[] = {"Oh", "Eh", "Euh"};
	double		tb[] = {0.0, 1.1, 2.2, 3.3};
	int			tab[] = {0, 1, 2, 3, 4};
	Test		tab2[5];
	
	std::cout << BOLD "**** String ****" DEFAULT << std::endl;
	iter(t, 3, &print);
	std::cout << std::endl;
	
	std::cout << BOLD "**** Int ****" DEFAULT << std::endl;
	iter(tab, 5, print);
	std::cout << std::endl;

	std::cout << BOLD "**** Double ****" DEFAULT  << std::endl;
	iter(tb, 4, print);
	std::cout << std::endl;

	std::cout << BOLD "**** Class ****" DEFAULT << std::endl;
	iter<Test>(tab2, 5, print);
	
	return (0);
}
