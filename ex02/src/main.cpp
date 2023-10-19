/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <blefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:21:41 by blefebvr          #+#    #+#             */
/*   Updated: 2023/10/19 15:41:13 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/Array.tpp"
#include "../lib/Array.hpp"

#define MAX_VAL 15

//int main()
//{
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//        std::cout << i << ". " << 
//    }
//}

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        for (int i = 0; i < test.size(); i++)
        {
            std::cout << i << ". " << test.operator[](i) << std::endl;
        }
    }
    Array<std::string> strings(MAX_VAL);
    std::string * mirror2 = new std::string[MAX_VAL];
    for (int i = 0; i < MAX_VAL; i++)
    {
        strings[i] = "Je suis une string";
        mirror2[i] = "Je suis une string";
    }
    {
        Array<std::string> tmp2 = strings;
        Array<std::string> test2(tmp2);
        for (int i = 0; i < test2.size(); i++)
        {
            std::cout << i << ". " << test2.operator[](i) << std::endl;
        }
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    delete [] mirror2;
    return 0;
}