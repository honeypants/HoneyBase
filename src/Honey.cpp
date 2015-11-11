//
// Created by David Paquette on 11/10/15.
//

#include "Honey.h"

Honey::Honey(int amountOfHoney) {
    this->setAmountOfHoney(amountOfHoney);
}

void Honey::setAmountOfHoney(int amount) {
    this->amountOfHoney = amount;
}

int Honey::getAmountOfHoney() {
    return this->amountOfHoney;
}
