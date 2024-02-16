/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:42:10 by hrinka            #+#    #+#             */
/*   Updated: 2024/02/15 18:30:16 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact     _contacts[8];
    int         _readInput(void) const;
    // uint64_t    _numberOfContacts;
public:
    PhoneBook();
    ~PhoneBook();
    void    addContact(void);
    void    printContacts(void) const;
    void    search(void) const;
    void    welcome(void) const;
};

#endif // PHONEBOOK_HPP