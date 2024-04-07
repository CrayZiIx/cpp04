/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolecomt <jolecomt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:37:11 by jolecomt          #+#    #+#             */
/*   Updated: 2024/03/26 23:15:17 by jolecomt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout<<"Brain : Constructor called"<<std::endl;
    return ;
}

Brain::Brain(const Brain &other)
{
    std::cout<<"Brain : Copy Constructor called"<<std::endl;
    *this = other;
    return ;
}
Brain::~Brain(void)
{
    std::cout<<"Brain : Destructor called"<<std::endl;
    return ;
}
Brain &Brain::operator=(const Brain &other)
{
    int i = 0;
    while (i++ < 99)
        this->ideas[i] = other.ideas[i];
    return (*this);
}