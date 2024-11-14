/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:02:54 by abakirca          #+#    #+#             */
/*   Updated: 2024/11/14 16:08:56 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replace(char **av)
{
	const char *filename = av[1];
	std::string fileoutname = filename;
	std::string oldString = av[2];
	std::string newString = av[3];
	std::string read;
	std::fstream filein;
	std::fstream fileout;
	std::string modifiedLine;
	size_t startPos = 0;

	fileoutname.append(".replace");
	filein.open(filename, std::ios::in);
	fileout.open(fileoutname.c_str(), std::ios::out);

	if (!filein.is_open())
	{
		std::cerr << "File doesn't exist." << std::endl;
		return;
	}
	while (std::getline(filein, read))
    {
        startPos = 0;
        modifiedLine.clear();
        while ((startPos = read.find(oldString, startPos)) != std::string::npos)
        {
            modifiedLine.append(read.substr(0, startPos));
            modifiedLine.append(newString);
            startPos += oldString.length();
            read = read.substr(startPos);
            startPos = 0;
        }
        modifiedLine.append(read);
        
        fileout << modifiedLine << std::endl;
    }

	filein.close();
	fileout.close();
}

int main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Invalid input!" << std::endl;
	else
		replace(av);
	
}
