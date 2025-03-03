/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 07:31:45 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/03 08:59:28 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>
#include <iostream>

static void	handleInputErrors( int ac ) {
	if (ac != 2) {
		std::cout << "Invalid argument number!" << std::endl;
		std::exit(EXIT_FAILURE);
	}
}

int	main( int ac, char **av ) {
	Harl	harl;

	handleInputErrors(ac);
	harl.complain(av[1]);
	return (0);
}
