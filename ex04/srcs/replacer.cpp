/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:04:35 by abakirca          #+#    #+#             */
/*   Updated: 2024/11/14 14:04:44 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

void replace(char **av)
{
	const char *filename = av[1];
	std::string fileoutname = filename;
	std::string newString = av[2];
	std::string oldString = av[3];
	std::string read;
	std::fstream filein;
	std::fstream fileout;

	fileoutname.append(".replace");
	filein.open(filename, std::ios::in);
	fileout.open(fileoutname.c_str(), std::ios::out);

	if (!filein.is_open())
	{
		std::cerr << "File doesnt exists." << std::endl;
		return;
	}
	while (std::getline(filein, read))
	{
		size_t pos = 0;
		while ((pos = read.find(oldString, pos)) != std::string::npos)
		{
			read.replace(pos, oldString.length(), newString);
			pos += newString.length();
		}
		fileout << read << std::endl;
	}

	filein.close();
	fileout.close();
}
