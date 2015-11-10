//
// Created by clancy on 11/8/15.
//

#include "Bee.h"

Bee::Bee(){
    std::cout<<"Making Bee.."<<std::endl;
}

Honey* Bee::makeHoney(int numberOfHoney) {
    for(int i = 1;i<numberOfHoney+1;i++) {
        std::cout << "Honey made = " << i << std::endl;
        usleep(1000000);
    }
    return new Honey(numberOfHoney);
}

Honey* Bee::makeHoneyFaster(int numberOfHoney) {
    for(int i = 1;i<numberOfHoney+1;i++) {
        std::cout << "Honey made = " << i << std::endl;
        usleep(100000);
    }
    return new Honey(numberOfHoney);
}

void Bee::putHoneyIn(Honey* myHoney) {
    std::string place;
    std::cout<<"Where do you want to put the honey?"<<std::endl;
    std::cin>>place;

    if(place!="pants"){
        printf("%s","Honey doesnt go there you IDIOT\n");
    } else{
        if(myHoney->getAmountOfHoney() > 0){
            printf("%s","mmmmm that feels nice\n");
            myHoney->setAmountOfHoney(0);
        } else {
            printf("%s","you're all out of honey, honey:(\n");
        }
    }
}
