#include <iostream>
#include <cstdlib>
using namespace std;

class Coin{
    private:
        string sideUp;
        int heads = 0;
        int tails = 0;
    
    public:
        Coin();
        // Coin(string sideUp);

        void toss();

        string getSideUp();

        void input();
        void inputCount();
};