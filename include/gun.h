#pragma once 
#include <string>
 
class Gun
{
public:
    void addBullet(int bullet_num);
    bool shoot();
    Gun(std::string  type);
private:
    std::string  _type;
    int _bullet_count;
    int weight;
};

 
