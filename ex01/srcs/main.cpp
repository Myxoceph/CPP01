/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:11:58 by abakirca          #+#    #+#             */
/*   Updated: 2024/11/08 20:51:26 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1("Steve");
	zombie1.announce();
	std::cout << std::endl << "-----Zombie horde from now on-----" << std::endl << std::endl;
	Zombie *zombies = zombie1.zombieHorde(5, "zombicik");
	zombies[0].announce();
	zombies[1].announce();
	zombies[2].announce();
	zombies[3].announce();
	zombies[4].announce();
	delete[] zombies;
	return (0);
}
