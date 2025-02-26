/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:41:23 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/26 10:39:40 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon {
	private:
		std::string	_type;
	public:
		Weapon( std::string type );
		~Weapon( void );
		std::string&	getType( void );
		void	setType( std::string type );
};

#endif
