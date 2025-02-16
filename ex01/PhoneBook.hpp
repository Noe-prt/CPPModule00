/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopareti <nopareti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:50:02 by nopareti          #+#    #+#             */
/*   Updated: 2025/02/16 15:17:49 by nopareti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    public:
        Contact contacts[8];
        int contactIndex;
        void AddNewContact();
        void SearchContact();
        PhoneBook();
        ~PhoneBook();
};

#endif