/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:37:46 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 22:01:39 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string _type);
		WrongAnimal(const WrongAnimal &other);
		virtual ~WrongAnimal();
		std::string getType(void) const;
		void makeSound(void) const;
		WrongAnimal	&operator=(const WrongAnimal &other);
};