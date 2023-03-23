#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    BitcoinExchange btc;
   	if (argc != 2)
        btc._error("Error: The Program Takes One Argument !");
	std::string input = argv[1];
	std::ifstream _data(input);
    std::string file = "data.csv";
    std::ifstream db(file);
   if(!_data || !db)
     btc._error("Error: Something Happend With Your File !");

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
            std::string cline =  btc.remove_spaces(line);
            if (cline.size() < 12 || ! btc.isValidDate(cline.substr(0, 4), cline.substr(5, 2), cline.substr(8, 2)))
                std::cerr << "Error: bad input => " + cline.substr(0, 10) << std::endl;
            else if (atof(cline.substr(11, -1).c_str()) < 0)
                std::cerr << "Error: not a positive number." << std::endl;
            else if (atof(cline.substr(11, -1).c_str()) < 0 || atof(cline.substr(11, -1).c_str()) > 1000)
                std::cerr << "Error: too large a number." << std::endl;
            else if ( btc.isValidDate(cline.substr(0, 4), cline.substr(5, 2), cline.substr(8, 2)))
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