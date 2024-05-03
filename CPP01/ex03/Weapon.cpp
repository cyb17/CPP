/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachen <yachen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:33:56 by yachen            #+#    #+#             */
/*   Updated: 2024/03/04 12:10:42 by yachen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weaponDescription ) : type(weaponDescription) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType()
{
	return type;
}

void	Weapon::setType( std::string otherType)
{
	type = otherType;
}