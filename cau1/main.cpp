#include "Cirde.h"

int main(int argc, char const *argv[])
{
    float Radius;
    cout<< "Radius: "; cin>>Radius;

    Cirde c(Radius);
    c.input();
    return 0;
}
