/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:45:53 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 22:35:57 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout<<"Cat : Constructor called - no parameters"<<std::endl;
	return ;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout<<"Cat : Constructor called - const char &other"<<std::endl;
	this->_brain = new Brain();
	*this = other;
	return ;
}
Cat::~Cat()
{
	std::cout<<"Cat : Destructor called - no parameters"<<std::endl;
	delete this->_brain;
	return ;
}
Cat	&Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return (*this);
}

void Cat::getBrainadd() { std::cout << _brain << std::endl; }

void Cat::makeSound(void) const
{
	std::cout<<"Miaou miaou"<<std::endl;
	return ;
}
