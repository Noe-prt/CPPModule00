/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopareti <nopareti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 10:51:43 by nopareti          #+#    #+#             */
/*   Updated: 2025/02/16 15:17:08 by nopareti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string.h>

class Contact
{
    public:
        inline std::string GetFirstName() { return firstName; }
        inline std::string GetLastName() { return lastName; }
        inline std::string GetNickName() { return nickName; }
        inline std::string GetPhoneNumber() { return phoneNumber; }
        inline std::string GetDarkestSecret() { return darkestSecret; }
        
        inline void SetFirstName(std::string newValue) { firstName = newValue; }
        inline void SetLastName(std::string newValue) { lastName = newValue; }
        inline void SetNickName(std::string newValue) { nickName = newValue; }
        inline void SetPhoneNumber(std::string newValue) { phoneNumber = newValue; }
        inline void SetDarkestSecret(std::string newValue) { darkestSecret = newValue; }
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
};

#endif