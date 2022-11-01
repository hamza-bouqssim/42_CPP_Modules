/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:15:20 by hbouqssi          #+#    #+#             */
/*   Updated: 2022/11/01 02:19:34 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdexcept>

int main(int argc, char **argv)
{
	zac *l;
    if (argc != 4)
    {
        std::cout << "Verify Your arguments !!!" << std::endl;
        return 0;
    }

    std::string filename = argv[1];
    std::string s1(argv[2]);
    std::string s2 = argv[3];
    std::ifstream inFile(filename);
    std::string lines, jLines = "", str;
    if(s1.empty() || s2.empty())
    {
        std::cout << "Empty String !" << std::endl;
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
	std::string erased;
	size_t i = 0;
    while (getline(inFile, jLines, '\0'))
	{
		while ((i = jLines.find(s1 ,i)) && i != (size_t)-1)
		{
			jLines.erase(i, s1.length());
			jLines.insert(i, s2);
			i += s2.length();
		}
		OutFile << jLines;
	}
}