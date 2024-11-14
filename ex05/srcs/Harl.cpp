/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:51:32 by abakirca          #+#    #+#             */
/*   Updated: 2024/11/14 17:16:40 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << DEBUG << std::endl << "The Dragonslayer is a massive slab of iron, built less for precision and more for sheer destructive power." << std::endl << "It's a weapon that crushes as much as it cuts." << std::endl << std::endl;
}

void Harl::info(void)
{
	std::cout << INFO << std::endl  << "The Dragonslayer has become a symbol of terror among Apostles, a weapon that defies ordinary logic." << std::endl << "Its mere presence on the battlefield strikes fear into even the most monstrous of foes." << std::endl << std::endl;
}

void Harl::warning(void)
{
	std::cout << WARNING << std::endl  << "Though forged to fell giants, the Dragonslayer is relentless on its wielder." << std::endl << "Its weight and size demand more than strength; they demand sacrifice, inch by inch, with every swing." << std::endl << std::endl;
}

void Harl::error(void)
{
	std::cout << ERROR << std::endl  << "Even the Dragonslayer, with all its mythic might, meets resistance here." << std::endl << "Against this enemy, the weapon quivers, as if straining against a force it was never meant to conquer." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*functions[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "Invalid level" << std::endl;
}
