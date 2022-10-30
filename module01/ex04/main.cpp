/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:15:20 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/10/31 00:11:13 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Verify Your arguments !!!" << std::endl;
        return 0;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream inFile(filename);
    std::string lines, jLines = "", str;
    if(s1 == s2)
    {
       std::ofstream OutpFile(filename + ".replace");
       if(!OutpFile)
       {
        std::cout << "Failed" << std::endl;
        return 0;
       }
       while(getline(inFile, lines))
            OutpFile << lines + '\n';
        return 0;
    }
    if (!inFile)
    {
        std::cout << "a file with this name - " << argv[1] << " - is not exist !" << std::endl;
        return 0;
    }
    std::ofstream OutFile(filename + ".replace");
    if(!OutFile)
    {
        std::cout << "Failed !" << std::endl;
        return 0;
    }
    while(getline(inFile, lines))
        jLines += lines + '\n';
    while (true)
    {
        int i = jLines.find(s1);
        if (i == -1)
            break ;
        str = jLines.substr(0, i) + s2 + jLines.substr(i + s1.length(), -1);
        jLines = str;
    }
    OutFile << str;
}