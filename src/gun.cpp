#include "gun.h"
#include <iostream>
using namespace std;

Gun::Gun(std::string  type)
{
    this->_type = type;
    this->_bullet_count = 0;
}

void Gun::addBullet(int  bullet_num)
{
    this->_bullet_count += bullet_num;
    cout<<"add done + "<<bullet_num<< endl;
}
 
 bool Gun::shoot()
 {
     if(this->_bullet_count <= 0) 
     {
            cout<<" No bullet ";
             return false;
     }
     this->_bullet_count  -= 1;  
     cout<<"shoot successfully !   bullet :  "<<this->_bullet_count <<endl; 
     return true;
 }
