/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:37:42 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 22:36:45 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// void test()
// {
// 	Dog basic;
// 	{
// 		Dog tmp = basic;
// 	}
// }

// int main(void)
// {
// 	Dog *test1 = new Dog();
// 	Dog *test2 = new Dog();

// 	test1->getBrainadd();
// 	*test2 = *test1;
// 	test2->getBrainadd();
// 	test();
// 	delete test1;
// 	delete test2;
// 	return (0);
// }

#define ARRAY_SIZE	10

int	main(void)
{
	Animal	*animal_array[ARRAY_SIZE];

	for (unsigned int i(0); i < ARRAY_SIZE; i++)
	{
		if (i * 2 < ARRAY_SIZE)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}
	std::cout << std::endl;
	for (unsigned int i(0); i < ARRAY_SIZE; i++)
	{
		animal_array[i]->makeSound();
	}
	std::cout << std::endl;
	for (unsigned int i(0); i < ARRAY_SIZE; i++)
		delete animal_array[i];
	return (0);
}