/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:50:45 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/02 21:03:12 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "FileReplacer.hpp"

static void	handleInputErrors( int ac, char **av ) {
	std::ifstream	ifs;

	if (ac != 4) {
		std::cout << "Invalid args number!" << std::endl;
		std::exit(EXIT_FAILURE);
	}
	ifs.open(av[1], std::ifstream::in);
	if (!ifs.is_open()) {
		std::cout << "No such file: " << av[1] << "."<< std::endl;
		std::exit(EXIT_FAILURE);
	}
	ifs.close();
}

int	main( int ac, char **av ) {
	handleInputErrors(ac, av);
	FileReplacer	file(av[1], av[2], av[3]);

	file.replaceAllOccurences();
	return (0);
}
