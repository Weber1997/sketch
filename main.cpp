#include "gun.h"
#include "solder.h"

int  test()
{

    solder s1("YU");
    s1.addGun(new Gun("ak47"));
    s1.addBulletToGun(20);
    s1.fire();
    return 0;

}
int main()
{
    return   test();
}
