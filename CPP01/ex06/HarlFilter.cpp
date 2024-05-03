/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:09:06 by yachen            #+#    #+#             */
/*   Updated: 2024/03/05 12:26:45 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

void	HarlFilter::debug(void)
{
	std::cout << "DEBUG: Ah hah Segfault! Check again your code logic" << std::endl;
}

void	HarlFilter::info(void)
{
	std::cout << "INFO: No more infomations for the moment" << std::endl;
}

void	HarlFilter::warning(void)
{
	std::cout << "WARNING: Be careful !" << std::endl;	
}

void	HarlFilter::error(void)
{
	std::cout << "ERROR: Booom! You die " << std::endl;
}

void	HarlFilter::complain(std::string level)
{
	int	choice = 0;
	if (level == "DEBUG")
		choice = 1;
	else if (level == "INFO")
		choice = 2;
	else if (level == "WARNING")
		choice = 3;
	else if (level == "ERROR")
		choice = 4;
	switch (choice)
	{
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
		{
			error();
			return ;
		}
	}
	std::cout << "Error: Unknown level" << std::endl;
}
