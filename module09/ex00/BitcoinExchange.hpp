#ifndef BTC_HPP
#define BTC_HPP
#include <iostream>
#include <fstream>
#include <map>
class BitcoinExchange{
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &_BitcoinExchange);
        BitcoinExchange &operator= (const BitcoinExchange &_BitcoinExchange);
        ~BitcoinExchange();

        //Methods:
        int isLeapYear(int year);
        int isValidDate(std::string _year, std::string _month, std::string _day);
        void _error(std::string error);
        std::string skip_spaces(std::string line);
        int check_dash_and_pipe(std::string cline);
        int floating_point(std::string line);
};

#endif