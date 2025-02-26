/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 07:46:50 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/26 08:26:35 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 42;
	int	i = 0;

	Zombie	zombie;
	Zombie*	horde = zombie.zombieHorde(N, "John Doe");
	if (horde)
	{
		while (i < N)
			horde[i++].announce();
		delete [] horde;
	}
	return (0);
}
