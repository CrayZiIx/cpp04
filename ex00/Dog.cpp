/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:44:23 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 20:53:48 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout<<"Dog : Constructor called - no parameters"<<std::endl;
	return ;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout<<"Dog : Constructor called - const Dog &other"<<std::endl;
	*this = other;
	return ;
}
Dog::~Dog()
{
	std::cout<<"Dog : Destructor called - no parameters"<<std::endl;
	return ;
}
Dog	&Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout<<"Wouf wouf"<<std::endl;
	return ;
}

