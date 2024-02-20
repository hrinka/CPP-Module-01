/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:25:31 by hrinka            #+#    #+#             */
/*   Updated: 2024/02/19 19:41:19 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP
# include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string	type);
	~Weapon(void);
	const std::string&	getType(void);
	void	setType(std::string type);
};

#endif