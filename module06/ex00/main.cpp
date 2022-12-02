/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:38:13 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/02 20:06:30 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
void intToOtherTypes(std::string number)
{
    int _integer = atoi(number.c_str());
    char _char = static_cast<char>(_integer);
    if(isprint(_char))
        std::cout << "char: " << _char << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << _integer << std::endl;
    float _float = static_cast<float>(_integer);
    std::cout << std::fixed << std::setprecision(1) << "float " << _float << "f" << std::endl;
    double _double = static_cast<double>(_integer);
    std::cout << "double: " << _double << std::endl;
}

void floatToOtherTypes(std::string number)
{
    float _float = atof(number.c_str());
    char _char = static_cast<char>(_float);
    if(isprint(_char))
        std::cout << "char: " << '\'' << _char <<  '\'' << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    int _integer = static_cast<int>(_float);
    std::cout << "int: " << _integer << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float: " << _float << "f" << std::endl;
    double _double = static_cast<double>(_float);
    std::cout << "double: " << _double << std::endl;    
}
void doubleToOtherTypes(std::string number)
{
    double _double = std::stod(number);
    char _char = static_cast<char>(_double);
    if (isprint(_char))
        std::cout << "char: " << '\'' << _char << '\'' << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    int _integer = static_cast<int>(_double);
    std::cout << "int: " << _integer << std::endl;
    float _float = static_cast<float>(_double);
    std::cout << std::fixed << std::setprecision(1) << "float: " << _float << "f" << std::endl;
    std::cout << "double: " << _double << std::endl;
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "This Program Takes Only One Parameter" << std::endl;
        return 0;
    }
        // intToOtherTypes(argv[1]);
        // floatToOtherTypes(argv[1]);
        doubleToOtherTypes(argv[1]);
    
}