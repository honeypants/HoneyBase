//
// Created by clancy on 11/8/15.
//

#ifndef HONEYMAKER_BEE_H
#define HONEYMAKER_BEE_H

#include <unistd.h>
#include <iostream>

class Bee {

    public:
        Bee();

        void makeHoney(int numberOfHoney);

    private:
        int theHoney;

};


#endif //HONEYMAKER_BEE_H
