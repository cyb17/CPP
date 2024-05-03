/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:22:23 by yachen            #+#    #+#             */
/*   Updated: 2024/03/05 12:19:00 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "Give me a complain level" << std::endl;
	else if (argc > 2)
		std::cout << "Too much complain level, you realy like to complain." << std::endl;
	else
	{
		Harl	Harl;
		Harl.complain(argv[1]);
	}
	return (0);
}