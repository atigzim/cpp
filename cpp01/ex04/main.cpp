#include <iostream>
#include <fstream>  
#include <string>
#include <cstdlib>


int main(int ac, char *av[])
{
    if(ac != 4)
    {
        std::cerr << "program that takes three parameters"<<std::endl;
        exit(1);
    }
    std::string str;  std::string sub;
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream inputFile(av[1]);
    std::ofstream outputFile("new_file.txt");
    int i = 0;
    if(!inputFile || !outputFile)
    {
        std:: cerr << "error opening file"<< std::endl;
        return 1;
    }
    
    while (true)
    {
        if(i == 0)
        {
            if(!std::getline(inputFile, str))
            {

                break;
            }

        }
        size_t pos = str.find(s1);
        if (pos != std::string::npos) 
        {
            sub = str.substr(0, pos); 
            outputFile << sub;
            outputFile << s2;  
            sub = str.substr(pos + s1.length());
            pos = sub.find(s1);
            if (pos != std::string::npos)
            {
                i = 1;
                str = sub;
            }
            else
            {
                i = 0;
                outputFile << sub;
            }
        }
        else
        {
            outputFile << str; 
        }
        // std::cout << str << std::endl;
    }
    outputFile << std::endl;

    outputFile.close();
    inputFile.close();
    return (0);
}