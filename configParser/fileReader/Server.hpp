/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:34:37 by user42            #+#    #+#             */
/*   Updated: 2020/11/03 15:35:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_HPP

# define SERVER_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Server {
    public:
        Server(void);
        Server(Server const &src);
        virtual ~Server(void);

        Server   &operator=(Server const &src);

    private:
        
        
};

#endif
