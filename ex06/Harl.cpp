/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 07:34:14 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/03 08:58:57 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl( void ) {
	this->_debugMessage = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
ketchup burger. I really do!";
	this->_infoMessage = "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	this->_warningMessage = "I think I deserve to have some extra bacon for free. I’ve been coming for \
years, whereas you started working here just last month.";
	this->_errorMessage = "This is unacceptable! I want to speak to the manager now.";
	this->_defaultMessage = "Probably complaining about insignificant problem";
}

Harl::~Harl( void ) {}

int	Harl::_getIntLevelValue( std::string level) const {
	int	index = -1;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i =0; i < 4; i++) {
		if (levels[i] == level) {
			index = i;
			break ;
		}
	}
	return (index);
}

void	Harl::_printMessages( int index ) const {
	if (index < 0) {
		std::cout << "[ " << this->_defaultMessage << " ]" << std::endl;
		return ;
	}
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	messages[4] = {
		this->_debugMessage,
		this->_infoMessage,
		this->_warningMessage,
		this->_errorMessage,
	};
	for (int i = index; i < 4; i++) {
		std::cout << "[ " << levels[i] << " ]" << std::endl;
		std::cout << messages[i] << std::endl;
	}
}

void	Harl::complain( std::string level ) {
	int	index = _getIntLevelValue(level);

	switch (index) {
		case 0:
			_printMessages(0);
			break ;
		case 1:
			_printMessages(1);
			break ;
		case 2:
			_printMessages(2);
			break ;
		case 3:
			_printMessages(3);
			break ;
		default:
			_printMessages(index);
			break ;
	}
}
