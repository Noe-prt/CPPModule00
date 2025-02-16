/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopareti <nopareti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:57:31 by nopareti          #+#    #+#             */
/*   Updated: 2025/02/16 19:06:06 by nopareti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include <iostream>
#include <limits>
# include <string>

PhoneBook::PhoneBook()
{
    std::string userInput;
    this->contactIndex = 0;
    std::cout << "---- WELCOME TO YOUR PHONE BOOK ----" << std::endl;
    std::cout << "PHONE BOOK OPTIONS --> [ADD] [SEARCH] [EXIT]" << std::endl;
    while (true)
    {
        std::cout << "> ";
        std::getline(std::cin, userInput);
        if (userInput == "ADD")
            this->AddNewContact();
        else if (userInput == "SEARCH")
            this->SearchContact();
        else if (userInput == "EXIT")
            break;
    }
}

void PhoneBook::AddNewContact()
{
    Contact newContact;
    std::string firstNameInput;
    std::string lastNameInput;
    std::string nickNameInput;
    std::string phoneNumberInput;
    std::string darkestSecretInput;
    
    while (firstNameInput.empty())
    {
        std::cout << "First name: ";
        std::getline(std::cin, firstNameInput);
        newContact.SetFirstName(firstNameInput);
    }
    while (lastNameInput.empty())
    {
        std::cout << "Last name: ";
        std::getline(std::cin, lastNameInput);
        newContact.SetLastName(lastNameInput);
    }
    while (nickNameInput.empty())
    {
        std::cout << "Nick name: ";
        std::getline(std::cin, nickNameInput);
        newContact.SetNickName(nickNameInput);
    }
    while (phoneNumberInput.empty())
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, phoneNumberInput);
        newContact.SetPhoneNumber(phoneNumberInput);
    }
    while (darkestSecretInput.empty())
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, darkestSecretInput);
        newContact.SetDarkestSecret(darkestSecretInput);
    }
    this->contacts[this->contactIndex % 8] = newContact;
    this->contactIndex++;
}

void PhoneBook::SearchContact()
{
    int index;

    if (this->contactIndex == 0)
    {
        std::cout << "Your phone book has no contact :(" << std::endl;
        return ;
    }
    for (int i = 0; i < this->contactIndex; i++)
    {
        std::cout << "|";
        std::cout << i;
        std::cout << "|";
        std::cout << contacts[i].GetFirstName();
        std::cout << "|";
        std::cout << contacts[i].GetLastName();
        std::cout << "|";
        std::cout << contacts[i].GetNickName();
        std::cout << "|";
        std::cout << std::endl;
    }
    while (true)
    {
        std::cout << "Enter the index of the contact you want to see (0 to " << this->contactIndex - 1 << "): ";
        std::cin >> index;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a valid number." << std::endl;
        }
        else if (index >= 0 && index < this->contactIndex)
            break;
        else
            std::cout << "Invalid index! Please enter a number between 0 and " << contactIndex - 1 << "." << std::endl;
    }
    std::cout << "First name --> " << this->contacts[index].GetFirstName() << std::endl;
    std::cout << "Last name --> " << this->contacts[index].GetLastName() << std::endl;
    std::cout << "Nick name --> " << this->contacts[index].GetNickName() << std::endl;
    std::cout << "Phone number --> " << this->contacts[index].GetPhoneNumber() << std::endl;
    std::cout << "Darkest secret --> " << this->contacts[index].GetDarkestSecret() << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

PhoneBook::~PhoneBook()
{
    std::cout << "See you soon..." << std::endl; 
}