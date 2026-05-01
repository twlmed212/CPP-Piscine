/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtawil <mtawil@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:34:38 by mtawil            #+#    #+#             */
/*   Updated: 2026/04/25 16:51:01 by mtawil           ###   ########.fr       */
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
	Data data(av[1], av[2], av[3]);

	std::ifstream origina_file(data.getOriginalF(), std::ios::in);
	std::ofstream newFile(data.getReplacedF(), std::ios::out);

	if (!newFile.is_open() || !origina_file.is_open()) {
		std::cerr << "Error creating/opening the file." << std::endl;
		return 1;
	}
	
	std::string text;
	while (getline(origina_file, text))
	{
		data.replace(text);
		newFile << data.getResult();
		if (!origina_file.eof()){
			newFile << std::endl;
		} 
	}
	
	return (0);
}