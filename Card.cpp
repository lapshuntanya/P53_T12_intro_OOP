//
// Created by Tetiana Perederii on 24.06.2026.
//

#include "Card.h"

Card::Card() {
    cardNumber = rand()*10'000 + rand();
    name = new char[7]{"Noname"};
    //strcpy_s(expiredDate, 6, "06.36"); //VS
    strcpy(expiredDate,"06.36"); //CLion, Online
    PIN = rand()%9000 + 1000;
    cash = 0;
    cout << "Opened a STANDART card: " << cardNumber << endl;
}

Card::Card(const char *name, const char *expiredDate, double cash) {
    cardNumber = rand()*10'000 + rand();

    int sizeName = strlen(name) + 1;
    this->name = new char[sizeName]; //!!!!
    //strcpy_s(this->name, sizeName, name); //VS
    strcpy(this->name, name); //CLion, Online

    //strcpy_s(this->expiredDate, 6, expiredDate); //VS
    strcpy(this->expiredDate, expiredDate); //CLion, Online

    PIN = rand()%9000 + 1000;
    this->cash = cash;
    cout << "Opened a VIP card: " << cardNumber << endl;
}

Card::~Card() {
}

void Card::showInfo() {
}
