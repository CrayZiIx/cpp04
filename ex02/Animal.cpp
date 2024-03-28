/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:37:45 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 22:27:42 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void)
{
	this->type = "Animal";
	std::cout<<"Animal : Constructor called - no parameters"<<std::endl;
	return ;
}

AAnimal::AAnimal(std::string _type)
{
	this->type = _type;
	std::cout<<"Animal : Constructor called - std::string _type"<<std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout<<"Animal : Copy Constructor called - const Animal &other"<<std::endl;
	*this = other;
	return ;
}
AAnimal::~AAnimal(void)
{
	std::cout<<"Animal : Destructor called - no parameters"<<std::endl;
	return ;
}
		
AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	this->type = other.type;
	return (*this);
}

void AAnimal::makeSound(void) const
{
	std::cout<<"Who I am ?"<<std::endl;
	return ;
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}
