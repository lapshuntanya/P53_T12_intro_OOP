#include "Card.h"

int main() {

    Card Daniil;
    Card Daria("Zavizlova Daria", "06.46", 5000);

    Card* Volodymyr = new Card();
    Card* Marko = new Card("Kalashnikod Marko", "06.56", 2000);


    Daniil.showInfo();
    Daria.showInfo();

    //(*Volodymyr).showInfo();
    Volodymyr->showInfo();
    Marko->showInfo();

    //------------------ end
    delete Volodymyr;
    delete Marko;

    return 0;
}