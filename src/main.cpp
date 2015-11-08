#include<iostream>


#include "Bee.h"

int main(){
    Bee myHoney;
    int a;

    std::cout<<"Please enter number of honeys:"<<std::endl;
    std::cin>>a;

    myHoney.makeHoney(a);


    return 0;
}