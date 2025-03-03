/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 07:32:26 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/03 08:09:11 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>


class Harl {
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
