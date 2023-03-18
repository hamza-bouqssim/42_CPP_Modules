#include "BitcoinExchange.hpp"
int isLeapYear(int year)
{
    if(((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        return 1;
    return 0;
}

int isValidDate(std::string _year, std::string _month, std::string _day)
{
    int year = atoi(_year.c_str());
    int month = atoi(_month.c_str());
    int day = atoi(_day.c_str());
    if (year < 1 || month < 1 || month > 12)
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

void _error(std::string error)
{
    std::cerr << error << std::endl;
    exit(EXIT_SUCCESS);
}

int main(int argc, char **argv)
{
   	if (argc != 2)
        _error("Error: The Program Takes One Argument !");
	std::string file = argv[1];
	std::ifstream _data(file);

   if(!_data)
    _error("Error: Something Happend With Your File !");

    std::string line;

    while(getline(_data, line))
    {
        if(isValidDate(line.substr(0, 4), line.substr(5, 2), line.substr(8, 2)))
            std::cout << "valid" << std::endl;
		else if ( isValidDate(line.substr(0, 4), line.substr(5, 2), line.substr(8, 2)) 
			&& atof(line.substr(9, 1).c_str()) < 0 && atof(line.substr(9, 1).c_str()) > 1000)
				std::cout << "Error: too large a number" << std::endl;
        else
            std::cout <<"Error: bad input => " << line.substr(0, 10) << std::endl;
    }
	return 0;
}