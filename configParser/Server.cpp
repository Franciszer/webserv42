/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:28:08 by user42            #+#    #+#             */
/*   Updated: 2020/11/05 10:11:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Server.hpp"

Server::Server(void):
_root("/"),
_client_body_buffer_size(8000)
{
    t_listen    listenDefault;

    listenDefault.host = "localhost";
    listenDefault.port = 80;
    this->_listen.push_back(listenDefault);
    
    //  maybe set default error pages
    return ;
}

Server::Server(Server const &src) {
    if (this != &src)
        *this = src;
    return ;
}

Server::~Server(void) {
    return ;
}

Server	&Server::operator=(Server const &src) {
    if (this != &src)
        *this = src;
    return *this;
}

int     Server::parse(int pos[2], tokenizedFile &file) {
    for (int i = X; i < file.size(); i++) {
        for (int j = Y; j < file[X].size(); j++) {
            
        }
    }
}
