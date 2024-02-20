/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:22:24 by hrinka            #+#    #+#             */
/*   Updated: 2024/02/20 21:00:28 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int	replace (const std::string& filename, const std::string& s1, const std::string& s2)
{
	std::ifstream infile(filename);
	if (!infile.is_open())
	{
		std::cerr << "Error: cannot open file " << filename << std::endl;
		return (1);
	}

	std::string outfile_name = filename + ".replace";
	std::ofstream outfile(outfile_name);
	if (outfile.fail())
	{
		std::cerr << "Error: cannot create file " << outfile_name << std::endl;
		return (1);
	}
	std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
		pos += s2.length();
	}

	outfile << content;

	infile.close();
	outfile.close();

	return(0);
}

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	return replace(av[1], av[2], av[3]);
}
