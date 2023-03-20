#include "Coin.h"

Coin::Coin(){
    toss();
}

void Coin::toss(){
    string A[2] = {"heads", "tails"};
    this->sideUp = A[0 + rand() %(1 + 1 - 0)];
    if (this->sideUp == A[0]){this->heads += 1;}
    if (this->sideUp == A[1]) {this->tails += 1;};
}

string Coin::getSideUp(){
    return this->sideUp;
}

void Coin::input(){
    cout << this->sideUp<< endl;
}

void Coin::inputCount(){
    cout <<"heads: "<< this->heads << endl
         <<"tails: "<< this->tails << endl;
}
