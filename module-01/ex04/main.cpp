/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:34:38 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/25 16:37:25 by mtawil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "Losers.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "[USAGE EX:]\n./losers [fileName] [occuranceStr] [replacedStr]" << std::endl;
		return (1);
	}
	Data data(av);

	std::ifstream origina_file(data.getOrigianlF(), std::ios::in);
	std::ofstream newFile(data.getReplacedF(), std::ios::out);

	if (!newFile.is_open()) {
		std::cerr << "Error: cant create output file" << std::endl;
		return 1;
	}
	if (origina_file.is_open())
	{
		std::string text;
		while (getline(origina_file, text))
		{
			data.replace();
			newFile << data.result;
			if (!origina_file.eof()){
				newFile << std::endl;
			} 
		}
	}
	else
	{
		std::cout << "Error creating/opening the file." << std::endl;
		return (1);
	}
	return (0);
}