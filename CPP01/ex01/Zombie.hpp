/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:52:47 by yachen            #+#    #+#             */
/*   Updated: 2024/02/05 13:12:43 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void	announce( void );
	
	private:
	
		std::string	name;
};

Zombie	*zombieHorde( int N, std::string name );

#endif