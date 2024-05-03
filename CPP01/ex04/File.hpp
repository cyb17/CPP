/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:46:48 by yachen            #+#    #+#             */
/*   Updated: 2024/03/04 15:47:23 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <fstream>
#include <iostream>

class	File
{
	private:
		std::fstream	oldFile;
		std::fstream	newFile;
		std::string		s1;
		std::string		s2;

	public:
	
		File(const std::string& str1, const std::string& str2);
		~File();
	
		int		openFiles(const std::string& filename);
		void	closeFiles();
		void	copieFile();
		void	replaceOcurrences(std::string& line);
};

#endif