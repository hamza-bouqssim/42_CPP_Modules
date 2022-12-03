/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:38:13 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/12/03 20:22:59 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#define _MAX_INT 2147483647
#define _MIN_INT -2147483648
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
void charToOtherTypes(std::string number)
{
    std::cout << "char: " << number[0] << std::endl;
    std::cout << "int: " << static_cast<int>(number[0]) << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(number[0]) << "f" <<  std::endl;
    std::cout << "double: " << static_cast<double>(number[0]) << std::endl;
}

void NanToOther(std::string number)
{
    double _double = std::stod(number);
    char _char = static_cast<char>(_double);
    if(isprint(_char))
        std::cout << "char: " << '\'' << _char << '\'' << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    int _integer = static_cast<int>(_double);
    if (_integer == _MIN_INT)
    {
        
        std::cout << "int: impossible" << std::endl;
    }
    else if(_integer < _MAX_INT &&_integer != _MIN_INT)
        std::cout << "int: " << _integer << std::endl;
    float _float = static_cast<float>(_double);
    std::cout << std::fixed << std::setprecision(1) << "float: " <<_float << "f" << std::endl;
    std::cout << "double: " << _double << std::endl;
}

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "This Program Takes Only One Parameter" << std::endl;
        return 0;
    }
    int i = 0;
    while(argv[1][i])
    {
        if (strlen(argv[1]) == 1 && isalpha(argv[1][i]))
        {
            puts("Char !...");
            charToOtherTypes(argv[1]);
            return 0;
        }
        else if (argv[1][i] == '.' && strrchr(argv[1], 'f'))
        { 
            puts("Float !...");
            floatToOtherTypes(argv[1]);
            return 0;
        }
        else if (argv[1][i] == '.' && !strrchr(argv[1], 'f'))
        {
            puts("Double !...");
            doubleToOtherTypes(argv[1]);
            return 0;
        }
        else if (isdigit(argv[1][i]) && !strchr(argv[1], '.'))
        {
            puts("Interger !...");
            intToOtherTypes(argv[1]);
            return 0;
        }
        else if (!strcmp(argv[1], "nan") || !strcmp(argv[1], "-inf") || !strcmp(argv[1], "+inf") || !strcmp(argv[1], "inf")||
                    !strcmp(argv[1], "inff") || !strcmp(argv[1], "-inff") || !strcmp(argv[1], "+inff") || !strcmp(argv[1], "nanf"))
        {
            puts("Nan !...");
            NanToOther(argv[1]);
            return 0;
        }
        i++;
    }
    return 0;
}