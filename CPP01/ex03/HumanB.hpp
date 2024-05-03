/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:07:23 by yachen            #+#    #+#             */
/*   Updated: 2024/03/04 12:09:47 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{	
	private:
		
		std::string	name;
		Weapon		*weapon;

	public:

		HumanB( std::string name );
		~HumanB();
		void	attack();
		void	setWeapon( Weapon &otherWeapon );
};

#endif