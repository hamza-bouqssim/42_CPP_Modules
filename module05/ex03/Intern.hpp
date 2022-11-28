#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
class Intern
{
    public:
        Intern();
        Intern(const Intern &_Intern);
        Intern &operator=(const Intern &_Intern);
        ~Intern();
        void *makeForm(std::string formName, std::string target);
        void *createShrubberyCreationForm(std::string target);
        void *createRobotomyRequestForm(std::string target);
        void *createPreidentialPardonForm(std::string target);
};
#endif