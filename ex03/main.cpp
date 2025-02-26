/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:53:28 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/26 10:45:24 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	club = Weapon("Crude spiked club");
	HumanA	bob("Bob", club);
	bob.attack();
	club.setType("Some other type of club");
	bob.attack();

	Weapon	sniper = Weapon("A f*cking sniper");
	HumanB	john("John");
	john.attack();
	john.setWeapon(sniper);
	john.attack();
	sniper.setType("Some other f*cking sniper");
	john.attack();
	return (0);
}
