/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:11:58 by abakirca          #+#    #+#             */
/*   Updated: 2024/11/08 20:38:58 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1("Steve");
	Zombie *zombie2 = zombie1.newZombie("Bob");
	zombie1.announce();
	zombie2->announce();
	zombie1.randomChump("John");
	delete zombie2;
	return (0);
}
