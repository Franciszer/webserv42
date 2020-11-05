/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Config.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:30:01 by user42            #+#    #+#             */
/*   Updated: 2020/11/05 10:39:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Config.hpp"

Config::Config(void) {
	return ;
}

Config::Config(Config const &src) {
	if (this != &src)
		*this = src;
	return ;
}

Config::~Config(void) {
	return ;
}

Config	&Config::operator=(Config const &src) {
	if (this != &src)
		*this = src;
}

int     Config::parse(char * const filename) {
	FileReader                 fileReader(filename);
	std::vector<std::string>   file;
	unsigned int               fileSize;

	fileReader.readFile();
	fileReader.getFile();
	fileReader.getFileOneLine(file);
	fileSize = file.size();
	for (unsigned int i = 0 ; i < fileSize; i++) {
		if (file[i] == "server") {
			Server  server;

			if (!server.parse(i, file))
				std::cerr << "Error: error in config file" << std::endl;
			else
				this->_servers.push_back(server);
		}
		else {
			std::cerr << "Error: unknown directive " << file[i] << std::endl;
			return 0;
		}
	}
}
