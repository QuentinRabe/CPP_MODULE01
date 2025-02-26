/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 07:46:50 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/26 08:08:24 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie;
	Zombie*	ptrZombie = zombie.newZombie("John Doe");
	ptrZombie->announce();
	zombie.randomChump("Jane Doe");
	delete ptrZombie;
	return (0);
}
