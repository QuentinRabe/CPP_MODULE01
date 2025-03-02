/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:13:13 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/02 21:03:01 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

FileReplacer::FileReplacer( std::string filename, std::string target, std::string replacement ) :
_filename(filename), _target(target), _replacement(replacement) {}

FileReplacer::~FileReplacer( void ) {}

std::string	FileReplacer::_makeReplacerFilename( void ) const {
	std::string filename = "";

	filename += this->_filename + ".replace";
	return (filename);
}

void	FileReplacer::_replacementProcess( std::ifstream& ifs, std::ofstream& ofs ) const {
	std::string	line = "";
	std::string	newContent = "";
	size_t	pos;
	size_t	prev_pos;

	while ((std::getline(ifs, line))) {
		pos = 0;
		prev_pos = 0;
		while ((pos = line.find(this->_target, prev_pos)) != std::string::npos) {
			newContent.append(line, prev_pos, pos - prev_pos);
			newContent.append(this->_replacement);
			prev_pos = pos + this->_target.length();
		}
		newContent.append(line, prev_pos, line.length() - prev_pos);
		ofs << newContent << "\n";
		newContent = "";
	}
}

void	FileReplacer::replaceAllOccurences( void ) const {
	std::ifstream ifs(this->_filename);
	std::ofstream ofs;
	std::string	newFilename = _makeReplacerFilename();

	ofs.open(newFilename, std::ofstream::trunc);
	if (!ifs.is_open() || !ofs.is_open()) {
		std::cout << "Error: Something goes wrong with the file stream!" << std::endl;
		exit(EXIT_FAILURE);
	}
	_replacementProcess(ifs, ofs);
	ofs.close();
}
