/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:42:12 by yachen            #+#    #+#             */
/*   Updated: 2024/02/05 13:13:07 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*hordePtr;
	
	hordePtr = zombieHorde( 5, "Brain Killer");
	delete[] hordePtr;
	
	return (0);
}