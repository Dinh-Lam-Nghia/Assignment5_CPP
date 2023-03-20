#include "Coin.h"

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 20; i++)
    {
        Coin a;
        a.input();
        cout<<"\n----------\n";
    }
    Coin a;
    a.input();
    cout<<"\n----------\n";
    a.inputCount();
    
    return 0;
}
