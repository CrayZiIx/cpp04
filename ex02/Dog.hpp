/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:44:20 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 22:28:58 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public AAnimal
{
	protected:
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog	&operator=(const Dog &other);
		void makeSound(void) const;
};
