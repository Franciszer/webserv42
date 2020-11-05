/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 10:27:52 by user42            #+#    #+#             */
/*   Updated: 2020/11/05 10:28:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReader.hpp"

int main(int argc, char *argv[])
{
    (void)argc;
    try {
        FileReader  fileReader(argv[1]);
        fileReader.readFile();
        // std::vector<std::vector<std::string >>file = fileReader.getFile();
        // for (std::vector<std::vector<std::string >>::iterator i = file.begin(); i < file.end(); i++) {
        //     for (std::vector<std::string>::iterator j = (*i).begin(); j < (*i).end(); j++) {
        //         std::cout << "[" << *j << "]";
        //     }
        //     std::cout << std::endl;
        // }
        std::vector<std::string>    line;
        
        fileReader.getFileOneLine(line);
        std::cout << "OK" << std::endl;
        for (unsigned int i = 0; i < line.size(); i++) {
            std::cout << "[" << line[i] << "]";
        }
        std::cout << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
