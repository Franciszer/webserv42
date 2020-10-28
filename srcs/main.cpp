/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frthierr <frthierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:36:19 by frthierr          #+#    #+#             */
/*   Updated: 2020/10/27 14:49:52 by frthierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "webserv.hpp"

int main(void)
{
	int server_fd;

	if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
		std::cerr << "could not create socket" << std::endl;
	}
	return 0;
}
