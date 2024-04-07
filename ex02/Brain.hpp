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


#pragma once
#include <iostream>
class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain &other);
        ~Brain(void);
        Brain &operator=(const Brain &other);
};