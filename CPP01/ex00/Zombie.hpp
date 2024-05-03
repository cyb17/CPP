/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:52:47 by yachen            #+#    #+#             */
/*   Updated: 2024/02/05 10:48:31 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		
		Zombie( std::string name );
		~Zombie();
		void	announce( void );
		void	randomChump( std::string name );
	
	private:
	
		std::string	name;
};

Zombie	*newZombie( std::string name );

#endif