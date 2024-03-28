/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:45:58 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 19:22:48 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP	
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	protected:
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat	&operator=(const Cat &other);
		void makeSound(void) const;
};

#endif
