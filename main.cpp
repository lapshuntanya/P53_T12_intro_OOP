#include "Card.h"

int main() {

   /* Card Daniil;
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
    delete Marko;*/


    Card* user = nullptr;

    int menu = 0;

    cout << "1- open a standart card!\n";
    cout << "2- open a VIP card!\n";
    cin >> menu;

    if (menu == 1) user = new Card();
    else if (menu == 2) {
        char text[100];
        cout << "input your name: ";
        cin.ignore();
        cin.getline(text, 100);
        user = new Card(text, "06.46", 10'000);
    }else return 0;


   do {
       cout << "+++++++++++++++++++++++++++\n";
       cout << "MENU: \n";
       cout << "\t 1- show all info\n";
       cout << "\t 2 - show your balance\n";
       cout << "\t 3 - change PIN\n";
       cout << "+++++++++++++++++++++++++++\n";
       cin >> menu;



   } while (menu!=0);



    delete user;
    return 0;
}