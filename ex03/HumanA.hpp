/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:00:22 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/26 10:24:38 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class	HumanA {
	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );
		void	attack( void );
	private:
		std::string	_name;
		Weapon&	_weapon;
};

#endif
