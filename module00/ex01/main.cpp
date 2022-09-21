#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

void Chart()
{
    std::cout<< "\e[0;31m*                INVALID COMMAND !!!!             *\033[0;32m" << '\n';
    std::cout<< '\n';
    std::cout<< "\033[0;32m*******************INSTRUCTIONS********************\033[0;32m"  << '\n';
    std::cout<< '\n';
    std::cout<< "\033[0;32m*********ENTER ONE OF THESE COMMANDS BELOW*********\033[0;32m"  << '\n';
    std::cout<< '\n';
    std::cout<< "*          \033[0;32m[ ADD : Save a New Contact ]           *\033[0;32m"  << '\n';
    std::cout<< "*     \033[0;32m[ SEARCH : Display a Specific Contact ]     *\033[0;32m"  << '\n';
    std::cout<< "*         \033[0;32m[ EXIT : Leaving The Program ]          *\e[0m"  << '\n';
}

int main(void)
{
    PhoneBook t_PhoneBook = PhoneBook();
    while(true)
    {
        std::string command;
        std::cout<< "Phonebook> ";
        std::getline(std::cin, command);
        if (command == "ADD")
            t_PhoneBook.add_contact();
        else if (command == "SEARCH")
            std::cout<< "SRch Founded"<< '\n';
        else if (command == "EXIT")
            exit(0);
        else
            Chart();
    }
}