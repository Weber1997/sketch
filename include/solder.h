#pragma once 
#include <string>
#include "gun.h"

class solder
{
public:
    void addGun(Gun *pGun);
    void addBulletToGun(int num);
    bool fire();
 
private:
      std::string  _name;
        Gun *_p_gun;
public:
    solder(std::string name);
    ~solder();
};



