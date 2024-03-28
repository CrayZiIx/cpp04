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

int main(void)
{
	Dog *test1 = new Dog();
	Dog *test2 = new Dog();
	test1->getBrainadd();
	*test2 = *test1;
	test2->getBrainadd();
	return (0);
}