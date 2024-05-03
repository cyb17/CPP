/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:45:53 by yachen            #+#    #+#             */
/*   Updated: 2024/03/04 12:09:44 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{	
	private:
		
		std::string	name;
		Weapon		&weapon;

	public:

		HumanA( std::string name, Weapon &weapon );
		~HumanA();
		void	attack();
};

#endif