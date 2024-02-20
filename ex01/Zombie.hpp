/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:29 by hrinka            #+#    #+#             */
/*   Updated: 2024/02/19 17:32:11 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <algorithm>

class Zombie
{
	private:
		std::string	_name;
	public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	void	announce(void);
	void	setName(std::string name);
};

Zombie	*newZombie(std::string name);

void	randomChump(std::string name);

#endif
