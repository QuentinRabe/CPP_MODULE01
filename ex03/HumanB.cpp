/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:08:47 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/26 10:44:45 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name) :
_name(name), _weapon(NULL) {}

HumanB::~HumanB( void ) {}

void	HumanB::attack( void ) {
	std::string	type = this->_weapon ? this->_weapon->getType() : "f*cking hands";
	std::cout << this->_name << " attacks with their " << type << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	this->_weapon = &weapon;
}
