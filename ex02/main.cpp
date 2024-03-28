/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:37:42 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 22:29:25 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void good(void)
{
	// const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	// std::cout<<meta->getType()<<" "<<std::endl;
	// meta->makeSound();
	std::cout<<j->getType()<<" "<<std::endl;
	j->makeSound();
	std::cout<<i->getType()<<" "<<std::endl;
	i->makeSound(); //will output the cat sound!

	// delete meta; 
	delete j;
	delete i;
}

void wrong(void)
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	
	std::cout<<meta->getType()<<" "<<std::endl;
	meta->makeSound();
	std::cout<<i->getType()<<" "<<std::endl;
	i->makeSound(); //will output the cat sound!

	delete meta; 
	delete i;
}

int main(void)
{
	good();
	std::cout<<std::endl<<std::endl;
	wrong();
	return (0);
}