/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:45:53 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 22:28:32 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout<<"Cat : Constructor called - no parameters"<<std::endl;
	return ;
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
	std::cout<<"Cat : Constructor called - const char &other"<<std::endl;
	*this = other;
	return ;
}
Cat::~Cat()
{
	std::cout<<"Cat : Destructor called - no parameters"<<std::endl;
	return ;
}
Cat	&Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout<<"Miaou miaou"<<std::endl;
	return ;
}
