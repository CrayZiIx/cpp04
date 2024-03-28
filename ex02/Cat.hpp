/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:45:58 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 22:28:31 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP	
# define CAT_HPP

#include "Animal.hpp"

class Cat : public AAnimal
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
