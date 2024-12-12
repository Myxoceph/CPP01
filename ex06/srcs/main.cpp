/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:57:50 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/12 13:46:49 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac == 2)
		harl.complain(av[1]);
	else
		return (std::cout << "Invalid Arguments!" << std::endl, 1);
	
}
