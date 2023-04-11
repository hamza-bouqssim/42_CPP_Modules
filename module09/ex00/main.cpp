/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouqssi <hbouqssi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:47:35 by hbouqssi          #+#    #+#             */
/*   Updated: 2023/04/11 16:05:12 by hbouqssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int is_all_digits(const std::string& str)
{
    for (int i = 0; i < (int)str.size(); i++) {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

int main(int argc, char **argv)
{
    BitcoinExchange btc;
   	if (argc != 2)
        btc._error("Error: could not open file.");
	std::string input = argv[1];
	std::ifstream _data(input);
    std::string file = "data.csv";
    std::ifstream db(file);
    if(!_data.is_open() ||  _data.peek() == EOF)
        btc._error("Error: Something Happend With Your File !");
    if(db.peek() == EOF || !db.is_open())
        btc._error("Error: Something Happend With Your DataBase !");
    std::string line, line2;
    std::map<std::string, std::string>map;

    while (getline(db, line2))
    {
        try
        {
            std::string date = line2.substr(0, 10);
            std::string value = line2.substr(11, -1);
            map[date] = value;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    while (getline(_data, line))
    {
        try
        {
            std::string cline =  btc.skip_spaces(line);
            if (cline == "exist")
                continue;
            else if (cline.size() < 14 || !btc.isValidDate(cline.substr(0, 4), cline.substr(5, 2), cline.substr(8, 2))
                || btc.check_dash_and_pipe(cline) == -1 || btc.floating_point(cline) == -1
                || (cline.substr(13,1) == "-" && cline.substr(14,-1) == "0"))
                        std::cout << "Error: bad input => " + cline.substr(0, 10) << std::endl;
            else if (atof(cline.substr(13, -1).c_str()) < 0 && btc.check_dash_and_pipe(cline))
                std::cout << "Error: not a positive number." << std::endl;
            else if (atof(cline.substr(13, -1).c_str()) > 1000)
                std::cout << "Error: too large a number." << std::endl;
            else if (btc.isValidDate(cline.substr(0, 4), cline.substr(5, 2), cline.substr(8, 2)))
            {
                std::string value_str = cline.substr(13, -1);
                int is_numeric = 1;
                for (int i = 0; i < (int)value_str.size(); i++)
                {
                    if (!isdigit(value_str[i]) && value_str[i] != '.' && value_str[i] != '-')
                    {
                        is_numeric = 0;
                        break;
                    }
                }
                if (!is_numeric || value_str == "-")
                {
                    std::cout << "Error: bad input => " + cline.substr(0, 10) << " non-numeric value." << std::endl;
                    continue;
                }
                std::string date = cline.substr(0, 10);
                std::map<std::string, std::string>::iterator it = map.find(date);
               if (it == map.end())
               {
                    it = map.lower_bound(date);
                    if (it->first == "2009-01-02")
                    {
                        std::cout << "Error: Date You're Looking Or The Lower Date Doesn't Exit In Your Database" << std::endl;
                        continue;
                    }
                    std::string lower_value = (--it)->second;
                    float db_value = atof(lower_value.c_str());
                    float input_value = atof(cline.substr(13, -1).c_str());
                    std::cout << date + " => " << input_value << " = " << input_value * db_value << std::endl;
               }
                else
                {
                    std::string v = map[date];
                    float db_value = atof(v.c_str());
                    float input_value = atof(cline.substr(13, -1).c_str());
                    std::cout << cline.substr(0, 10) + " => " << input_value << " = " << input_value * db_value << std::endl;
                }
            }
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }
	return 0;
}