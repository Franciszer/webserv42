/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Config.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:29:38 by user42            #+#    #+#             */
/*   Updated: 2020/11/04 19:08:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_HPP

# define CONFIG_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <vector>
# include "Server.hpp"
# include "FileReader.hpp"

class Config {
    public:
        Config(void);
        Config(Config const &src);
        virtual ~Config(void);

        Config      &operator=(Config const &src);
        int         parse(char * const filename);
    private:
        std::vector<Server>  _servers;
        
};

#endif
