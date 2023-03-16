#include "BitcoinExchange.hpp"
int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 2)
    {
        std::cerr << "This Program Works With Only One Argument" << std::endl;
        exit(EXIT_SUCCESS);
    }
    std::string file = "data.csv";
    std::ifstream _data(file);
    if(!_data)
    {
        std::cout << "a file with this name " << file << "is not exit !" << std::endl;
        return 0;
    }
   try
   {
    std::map<std::string, std::string>map;
    std::string line;
    while(getline(_data, line))
    {
        std::string key = line.substr(0, 10);
        std::string value = (line.substr(11));
        map[key] = value;
    }
    std::map<std::string, std::string>::iterator it;
    it = map.begin();
    while (it != map.end())
    {
        std::cout << it->first << "  " << it->second << std::endl;
        it ++;
    }
   }
   catch(const std::exception& e)
   {
    std::cerr << e.what() << '\n';
   }
   


    return 0;
}