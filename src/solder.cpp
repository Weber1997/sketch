#include "solder.h"

solder::solder(std::string name)
{
    this->_name = name;
}

solder::~solder()
{
    if(this->_p_gun == nullptr)
    {
            return;
    }

    delete this->_p_gun;
    this->_p_gun = nullptr;
}


void solder::addGun(Gun *pGun)
{
     this->_p_gun = pGun;
}

void solder::addBulletToGun(int num)
{
    this->_p_gun->addBullet(num);
}

bool solder::fire()
{
   return this->_p_gun->shoot();
}

