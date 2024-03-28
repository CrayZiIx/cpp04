/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:45:53 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 21:03:41 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout<<"WrongCat : Constructor called - no parameters"<<std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout<<"WrongCat : Constructor called - const char &other"<<std::endl;
	*this = other;
	return ;
}
WrongCat::~WrongCat()
{
	std::cout<<"WrongCat : Destructor called - no parameters"<<std::endl;
	return ;
}
WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout<<"Miaou miaou"<<std::endl;
	return ;
}
