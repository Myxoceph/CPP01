/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:02:54 by abakirca          #+#    #+#             */
/*   Updated: 2024/11/14 13:09:48 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Invalid input!" << std::endl;
	else
		replace(av);
	
}
