/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:26:06 by yachen            #+#    #+#             */
/*   Updated: 2024/02/05 14:36:30 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "string's adress: " << &str << std::endl;
	std::cout << "adress stocked in stringPTR: " << stringPTR << std::endl;
	std::cout << "adress stocked in stringREF: " << &stringREF << std::endl;

	std::cout << "string's value: " << str << std::endl;
	std::cout << "value in adress pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value in adress pointed by stringREF: " << stringREF << std::endl;
	
	return (0);
}