/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:16:19 by yachen            #+#    #+#             */
/*   Updated: 2024/03/04 16:54:31 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "File.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Wrong parameters number" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0')
	{
		std::cout << "Error: string to replace can't be nothing";
		return (1);
	}
	File	file(argv[2], argv[3]);
	file.openFiles(argv[1]);
	file.copieFile();
	file.closeFiles();
	return (0);
}

/* TESTE

./sed
./sed "" "" ""
./Sed " " "" ""
./Sed "noExist" " " ""
./Sed "teste" " " "-----"
./Sed "teste" "&" "@"

*/