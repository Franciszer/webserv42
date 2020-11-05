/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReader.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:33:47 by user42            #+#    #+#             */
/*   Updated: 2020/11/05 10:24:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FileReader_HPP

# define FileReader_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include <algorithm>
# include <iterator>
# include <vector>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>	

typedef std::vector<std::vector<std::string>> tokenizedFile;

// Usage:
// - initialize an instance of this class with the name of the file you want to read
// - call the readFile member function
// - access the file inside a string via the readFile member function

// this class reads the whole file at once, so don't use it to read an infinite file such as /dev/random

class FileReader {
	public:
		FileReader(char * const fileName, int bufferSize = 512, char endLine = '\n');
		FileReader(FileReader const &src);
		virtual	~FileReader(void);

		FileReader				&operator=(FileReader const &src);
		int          			readFile();
		tokenizedFile			getFile() const;
		void					getFileOneLine(std::vector<std::string>	&line) const;
		void         			close() const;
		
		class		CannotOpenFileException: public std::exception {
			virtual const char	*what() const throw();
		};
		
	private:
		FileReader(void);
		int							_fd;
		char*              			_fileName;
		int							_bufferSize;
		char						_endLine;
		tokenizedFile				_file;
};

#endif
