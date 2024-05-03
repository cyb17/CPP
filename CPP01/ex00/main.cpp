/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:32:30 by yachen            #+#    #+#             */
/*   Updated: 2024/02/05 11:08:32 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*newZombiePtr;
	Zombie	zombie( "Brain killer 1" );
	
	zombie.announce();
	zombie.randomChump( "Brain killer 2" );
	newZombiePtr = newZombie( "Brain killer 3" );
	newZombiePtr->announce();
	
	delete newZombiePtr;
	
	return (0);
}