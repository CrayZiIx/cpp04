/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:44:23 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 22:36:15 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout<<"Dog : Constructor called - no parameters"<<std::endl;
	this->_brain = new Brain();
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
	delete this->_brain;
	return ;
}
Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	delete this->_brain;
	this->_brain = new Brain(*other._brain);
	return (*this);
}

void Dog::getBrainadd(void) 
{
	std::cout << _brain << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout<<"Wouf wouf"<<std::endl;
	return ;
}

