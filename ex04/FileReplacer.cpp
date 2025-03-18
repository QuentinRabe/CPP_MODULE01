/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:13:13 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/18 19:01:37 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>

FileReplacer::FileReplacer( std::string filename, std::string target, std::string replacement ) :
_filename(filename), _target(target), _replacement(replacement) {}

FileReplacer::~FileReplacer( void ) {}

std::string	FileReplacer::_makeReplacerFilename( void ) const {
	std::string filename = "";

	filename += this->_filename + ".replace";
	return (filename);
}

void	FileReplacer::_replacementProcess( std::ifstream& ifs, std::ofstream& ofs ) const {
	std::stringstream	buffer;
	std::string		content = "";
	std::string	newContent = "";
	buffer << ifs.rdbuf();
	content = buffer.str();
	size_t	pos;
	size_t	prev_pos;
	pos = 0;
	prev_pos = 0;
	while ((pos = content.find(this->_target, prev_pos)) != std::string::npos) {
		newContent.append(content, prev_pos, pos - prev_pos);
		newContent.append(this->_replacement);
		prev_pos = pos + this->_target.length();
	}
	newContent.append(content, prev_pos, content.length() - prev_pos);
	ofs << newContent;
}

void	FileReplacer::replaceAllOccurences( void ) const {
	std::ifstream ifs;
	std::ofstream ofs;
	std::string	newFilename = _makeReplacerFilename();

	ifs.open(this->_filename.c_str());
	ofs.open(newFilename.c_str(), std::ofstream::trunc);
	if (!ifs.is_open() || !ofs.is_open()) {
		std::cout << "Error: Something goes wrong with the file stream!" << std::endl;
		exit(EXIT_FAILURE);
	}
	_replacementProcess(ifs, ofs);
	ofs.close();
}
