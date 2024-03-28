/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:45:58 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 21:02:02 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:
	public:
		WrongCat();
		WrongCat(const WrongCat &other);
		~WrongCat();
		WrongCat	&operator=(const WrongCat &other);
		void makeSound(void) const;
};
