/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:17:47 by abakirca          #+#    #+#             */
/*   Updated: 2024/11/15 16:15:21 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string wptype)
{
	this->type = wptype;
}

Weapon::Weapon(std::string name)
{
	this->type = name;
}
