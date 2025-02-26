/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:08:47 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/26 10:24:53 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon& weapon) :
_name(name), _weapon(weapon) {}

HumanA::~HumanA( void ) {}

void	HumanA::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
