//
// Created by clancy on 11/8/15.
//

#ifndef HONEYMAKER_BEE_H
#define HONEYMAKER_BEE_H

#include <unistd.h>
#include <iostream>
#include "Honey.h"
class Bee {

    public:
        Bee();
        Honey* makeHoney(int numberOfHoney);
        Honey* makeHoneyFaster(int numberOfHoney);
        void putHoneyIn(Honey* myHoney);
    private:
        int theHoney;

};


#endif //HONEYMAKER_BEE_H
