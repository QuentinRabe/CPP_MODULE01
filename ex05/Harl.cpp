/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 07:34:14 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/03 08:21:17 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

typedef void(Harl::*Action)( void );

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years, whereas you started working here just last month." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level ) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Action actions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	index = -1;

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			index = i;
			break ;
		}
	}
	if (index >= 0)
		(this->*actions[index])();
	else
	 	std::cout << "Invalid level" << std::endl;
}
