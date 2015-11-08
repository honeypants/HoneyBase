//
// Created by clancy on 11/8/15.
//

#include "Bee.h"

Bee::Bee(){
    std::cout<<"Making Bee.."<<std::endl;
}

void Bee::makeHoney(int numberOfHoney) {
    for(int i = 1;i<numberOfHoney+1;i++){
        std::cout<<"Honey made = "<<i<<std::endl;
        usleep(1000000);
    }
}