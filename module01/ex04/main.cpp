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
    if (!inFile)
    {
        std::cout << "a file with this name - " << argv[1] << " - is not exist !" << std::endl;
        return 0;
    }
    std::ofstream OutFile(filename + ".replace");
    std::string lines;
    while(getline(inFile, lines))
    {
        OutFile << lines << std::endl;
    }
}