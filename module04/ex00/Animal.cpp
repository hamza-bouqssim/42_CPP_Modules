#include "Animal.hpp"
Animal::Animal()
{
    std::cout << "Animal Constructor Called" << std::endl;
};

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}
Animal::Animal(const Animal &_Animal)
{
    std::cout << "Animal :Copy Constructor Called" << std::endl;
};
Animal &Animal::operator=(const Animal &_Animal){

    std::cout << "Animal :Copy  Assingnement Operator Called" << std::endl;
};
void Animal::makeSound(){
    std::cout << "Animal" << std::endl;
};