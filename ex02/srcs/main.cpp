/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:50:59 by abakirca          #+#    #+#             */
/*   Updated: 2024/11/11 16:57:50 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "Memory adress of the string: " << &str << std::endl;
	std::cout << "Memory adress held by pointer: " << stringPTR << std::endl;
	std::cout << "Memory adress held by reference: " << &stringREF << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Value of String : " << str << std::endl;
	std::cout << "Value of String pointed to by pointer : " << *stringPTR << std::endl;
	std::cout << "Value of String pointed to by reference : " << stringREF << std::endl;
}
