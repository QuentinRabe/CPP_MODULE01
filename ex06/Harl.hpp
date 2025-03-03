/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 07:32:26 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/03 09:01:14 by arabefam         ###   ########.fr       */
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
		int	_getIntLevelValue( std::string level ) const;
		void	_printMessages( int index ) const;

		std::string	_debugMessage;
		std::string	_infoMessage;
		std::string	_warningMessage;
		std::string	_errorMessage;
		std::string	_defaultMessage;
};

#endif
