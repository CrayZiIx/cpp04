/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:37:46 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 23:17:38 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	private:
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string _type);
		Animal(const Animal &other);
		virtual ~Animal();
		std::string getType(void) const;
		virtual void makeSound(void) const;
		Animal	&operator=(const Animal &other);
		virtual void getBrainadd();
};

#endif