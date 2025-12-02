#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type;
public:

    Weapon(std::string n);
    ~Weapon();
    std::string getType()const;
    void setType(std::string);
};





#endif