/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:21:02 by hrinka            #+#    #+#             */
/*   Updated: 2024/02/19 17:27:04 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void)
{
	int size;

	size = 20;
	Zombie *horde = zombieHorde(size, "Zom");
	int i = 0;
	while (i < size)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
}
