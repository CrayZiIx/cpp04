/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:37:46 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/28 14:58:23 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal(void);
		AAnimal(std::string _type);
		AAnimal(const AAnimal &other);
		virtual ~AAnimal();
		std::string getType(void) const;
		virtual void makeSound(void) const;
		AAnimal	&operator=(const AAnimal &other);
};