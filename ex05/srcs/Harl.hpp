/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:47:30 by abakirca          #+#    #+#             */
/*   Updated: 2024/11/14 17:16:26 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#define DEBUG "\033[32m[ DEBUG ]\033[0m"
#define INFO "\033[34m[ INFO ]\033[0m"
#define WARNING "\033[33m[ WARNING ]\033[0m"
#define ERROR "\033[31m[ ERROR ]\033[0m"

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
	public:
		void complain(std::string level);
};

#endif
