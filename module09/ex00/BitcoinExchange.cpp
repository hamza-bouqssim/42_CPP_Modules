#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

};
BitcoinExchange::~BitcoinExchange()
{

};
int BitcoinExchange::isLeapYear(int year)
{
    return (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0));

}

int BitcoinExchange::isValidDate(std::string _year, std::string _month, std::string _day)
{
    if( _year.size() != 4 || (_month.size() > 2 || _month.size() < 2) || (_day.size() > 2 || _day.size() < 2))
        return 0;
    int year = atoi(_year.c_str());
    int month = atoi(_month.c_str());
    int day = atoi(_day.c_str());
    if (year < 2009 || month < 1 || month > 12)
        return 0;

    if (day < 1)
        return 0;

    if (month == 2)
    {
        if (day > 29)
            return 0;
        if (day == 29 && !isLeapYear(year))
            return 0;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30)
            return 0;
    }
    else {
        if (day > 31)
            return 0;
    }

    return 1;
}

void BitcoinExchange::_error(std::string error)
{
    std::cerr << error << std::endl;
    exit(EXIT_SUCCESS);
}
std::string BitcoinExchange::remove_spaces(std::string line)
{
    if((line.find("date | value") != std::string::npos))
        return "exist";
    std::string cline  = line;
    cline.erase(std::remove(cline.begin(), cline.end(), ' '), cline.end());
    return cline;
}

int BitcoinExchange::check_dash_and_pipe(std::string cline)
{
    int dashCount = 0;
    int pipeCount = 0;

    for (size_t i = 0; i < cline.length(); i++) {
        if (cline[i] == '-')
            dashCount++;
        else if (cline[i] == '|')
            pipeCount++;
    }
    if(cline.substr(11, 1) == "-")
        return 1;
    if (dashCount < 2 || dashCount > 2)
        return -1;
    else if (pipeCount > 1)
        return -1;
    return 0;
}