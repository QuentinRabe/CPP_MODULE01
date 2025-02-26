/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:00:22 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/26 10:44:34 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class	HumanB {
	public:
		HumanB( std::string name );
		~HumanB( void );
		void	attack( void );
		void	setWeapon(Weapon& weapon);
	private:
		std::string	_name;
		Weapon*	_weapon;
};

#endif
