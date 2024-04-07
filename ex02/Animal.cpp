/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:37:45 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 22:35:59 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout<<"Animal : Constructor called - no parameters"<<std::endl;
	return ;
}

Animal::Animal(std::string _type)
{
	this->type = _type;
	std::cout<<"Animal : Constructor called - std::string _type"<<std::endl;
	return ;
}

Animal::Animal(const Animal &other)
{
	std::cout<<"Animal : Copy Constructor called - const Animal &other"<<std::endl;
	*this = other;
	return ;
}
Animal::~Animal(void)
{
	std::cout<<"Animal : Destructor called - no parameters"<<std::endl;
	return ;
}
		
Animal	&Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout<<"Who I am ?"<<std::endl;
	return ;
}

std::string Animal::getType(void) const
{
	return (this->type);
}