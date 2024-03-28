/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:37:45 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 21:03:25 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout<<"WrongAnimal : Constructor called - no parameters"<<std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string _type)
{
	this->type = _type;
	std::cout<<"WrongAnimal : Constructor called - std::string _type"<<std::endl;
	return ;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout<<"WrongAnimal : Copy Constructor called - const WrongAnimal &other"<<std::endl;
	*this = other;
	return ;
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout<<"WrongAnimal : Destructor called - no parameters"<<std::endl;
	return ;
}
		
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout<<"*******"<<std::endl;
	return ;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
