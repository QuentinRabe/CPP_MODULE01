/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:09:23 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/02 21:02:47 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_REPLACER_HPP
# define FILE_REPLACER_HPP

# include <string>
# include <fstream>

class FileReplacer {
	public:
		FileReplacer( std::string filename, std::string target, std::string replacement );
		~FileReplacer( void );
		void	replaceAllOccurences( void ) const;
	private:
		std::string	_makeReplacerFilename( void ) const;
		void	_replacementProcess( std::ifstream& ifs, std::ofstream& ofs ) const;

		std::string _filename;
		std::string _target;
		std::string _replacement;
};

#endif
