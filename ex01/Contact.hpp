/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:36:26 by hrinka            #+#    #+#             */
/*   Updated: 2024/02/15 17:42:08 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
	int			_index;

	std::string _printLen(std::string str) const;
	std::string _getInput(std::string str) const;

	public:
	Contact();
	~Contact();
	void	init(void);
	void	view(int index) const;
	void	display(int index) const;
	void	setIndex(int i);
};

#endif