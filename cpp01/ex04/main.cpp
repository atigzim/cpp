#include "mai.hpp"

int main(int ac, char *av[])
{
    if(ac != 4)
    {
        std::cerr << "program that takes three parameters"<<std::endl;
        exit(1);
    }
    // replace obj();
    // obj.
    std::string str;
    std::string sub;
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream inputFile(av[1]);
    std::ofstream outputFile("new_file.txt");
    if(!inputFile || !outputFile)
    {
        std:: cerr << "error opening file"<< std::endl;
        return 1;
    }
    
    while (std::getline(inputFile, str))
    {
        size_t pos = str.find(s1);
        if (pos != std::string::npos) 
        {
            sub = str.substr(0, pos); 
            outputFile << sub;
            outputFile << s2;  
            sub = str.substr(pos + s1.length()); 
            outputFile << sub;
        }
        else
        {
            outputFile << str; 
        }

        outputFile << std::endl;
    }

    outputFile.close();
    inputFile.close();
    return (0);
}