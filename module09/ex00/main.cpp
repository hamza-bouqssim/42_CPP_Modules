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
std::string remove_spaces(std::string line)
{
    std::string cline  = line;
    cline.erase(std::remove(cline.begin(), cline.end(), ' '), cline.end());
    return cline;
}

void check_dash_and_pipe(std::string cline)
{
    int dashCount = 0;
    int pipeCount = 0;

    for (size_t i = 0; i < cline.length(); i++) {
        if (cline[i] == '-')
            dashCount++;
        else if (cline[i] == '|')
            pipeCount++;
    }

    if (dashCount < 2 || dashCount > 2)
        _error("There Must Be Two Dashes");
    else if (pipeCount > 1)
        _error("There Must Be One Pipe");
}


int main(int argc, char **argv)
{
   	if (argc != 2)
        _error("Error: The Program Takes One Argument !");
	std::string input = argv[1];
	std::ifstream _data(input);
    std::string file = "data.csv";
    std::ifstream db(file);
   if(!_data || !db)
    _error("Error: Something Happend With Your File !");

    std::string line;
    std::string line2;
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
            std::string cline = remove_spaces(line);
            if (cline.size() < 12 || !isValidDate(cline.substr(0, 4), cline.substr(5, 2), cline.substr(8, 2)))
                std::cerr << "Error: bad input => " + cline.substr(0, 10) << std::endl;
            else if (atof(cline.substr(11, -1).c_str()) < 0)
                std::cerr << "Error: not a positive number." << std::endl;
            else if (atof(cline.substr(11, -1).c_str()) < 0 || atof(cline.substr(11, -1).c_str()) > 1000)
                std::cerr << "Error: too large a number." << std::endl;
            else if (isValidDate(cline.substr(0, 4), cline.substr(5, 2), cline.substr(8, 2)))
            {
                std::string date = cline.substr(0, 10);
                std::map<std::string, std::string>::iterator it = map.find(date);
               if (it == map.end())
               {
                    it = map.lower_bound(date);
                    if (it->first == "2009-01-02")
                    {
                        std::cerr <<"Error: Date You're Looking Or The Lower Date Doesn't Exit In Your Database" << std::endl;
                        continue;

                    }
                    std::string lower_value = (--it)->second;
                    float db_value = atof(lower_value.c_str());
                    float input_value = atof(cline.substr(11, -1).c_str());
                    std::cout << date + " => " << input_value << " = " << input_value * db_value << std::endl;
               }
                else
                {
                    std::string v = map[date];
                    float db_value = atof(v.c_str());
                    float input_value = atof(cline.substr(11, -1).c_str());
                    std::cout << cline.substr(0, 10) + " => " << input_value << " = " << input_value * db_value << std::endl;
                }
            }
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
	return 0;
}