/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:09:06 by yachen            #+#    #+#             */
/*   Updated: 2024/03/05 11:42:01 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// typedef void	(Harl::*fPtr)();

void	Harl::debug(void)
{
	std::cout << "DEBUG: Ah hah Segfault! Check again your code logic" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: No more infomations for the moment" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING: Be careful ！" << std::endl;	
}

void	Harl::error(void)
{
	std::cout << "ERROR: Booom! You die " << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*fTab[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == tab[i])
		{
			(this->*fTab[i])();
			return ;
		}
	}
	std::cout << "Error: Unknown level" << std::endl;
}
