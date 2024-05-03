/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:58:40 by yachen            #+#    #+#             */
/*   Updated: 2024/03/05 12:11:08 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(const std::string& str1, const std::string& str2) : s1(str1), s2(str2) {}

File::~File() {}

int	File::openFiles(const std::string& filename)
{
	std::string	newFilename = filename + ".replace";
	
	oldFile.open(filename.c_str(), std::fstream::in);
	if (oldFile.is_open())
	{
		newFile.open(newFilename.c_str(), std::fstream::in | std::fstream::out | std::fstream::trunc);
		if (!newFile.is_open())
		{
			std::cout << "Error: open " << filename << ".replace failed" << std::endl;
			oldFile.close();
			return (-1);
		}
	}
	else
	{
		std::cout << "Error: open " << filename << " failed" << std::endl;
		return (-1);
	}
	return (0);
}

void	File::closeFiles()
{
	if (oldFile.is_open())
		oldFile.close();
	if (newFile.is_open())
		newFile.close();
}

void	File::copieFile()
{
	std::string	buffer;
	while (std::getline(oldFile, buffer))
	{
		replaceOcurrences(buffer);
		newFile << buffer << std::endl;
		buffer.clear();
	}
}

void	File::replaceOcurrences(std::string& line)
{
    std::string result;

    size_t pos = 0;
    size_t found = line.find(s1);

    while (found != std::string::npos)
	{
        result.append(line, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
        found = line.find(s1, pos);
    }
	result.append(line, pos, line.length() - pos);
    line = result;
}