/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:18:39 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/26 08:24:33 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde( int N, std::string name )
{
	int	i = 0;

	if (N <= 0)
		return (NULL);
	Zombie*	horde = new Zombie[N];
	while (i < N)
		horde[i++]._setName(name);
	return  (horde);
}
