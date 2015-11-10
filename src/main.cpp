#include<iostream>


#include "Bee.h"

int main(){
    Bee honeyPants;
    int a;

    std::cout<<"Please enter number of honeys:"<<std::endl;
    std::cin>>a;

    Honey *someHoney = honeyPants.makeHoneyFaster(a);

    //honeyPants.makeHoney(a);

    honeyPants.putHoneyIn(someHoney);
    honeyPants.putHoneyIn(someHoney);
    return 0;
}