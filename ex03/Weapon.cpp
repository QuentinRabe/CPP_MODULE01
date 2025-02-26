/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:50:30 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/26 10:22:07 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon( std::string type ) :
_type(type)
{
	std::cout << "Constructor is called" << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << "Destructor is called" << std::endl;
}

std::string&	Weapon::getType( void )
{
	std::string&	typeREF = this->_type;
	return (typeREF);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}
