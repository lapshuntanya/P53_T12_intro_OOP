//
// Created by Tetiana Perederii on 24.06.2026.
//

#ifndef P53_T12_INTRO_OOP_CARD_H
#define P53_T12_INTRO_OOP_CARD_H
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

class Card {
    /*---------------- Поля (fields) ------------------------*/
    unsigned long cardNumber;   //Номер картки      get
    char* name;                 //Ім’я власника     get
    char expiredDate[6];        //Дата дії          get
    unsigned short PIN;         //Код картки        get+set
    double cash;                //Сума грошей на картці     get

public:
    /*--------------- Методи (methods) ----------------------------*/
    /*--------- Конструктори/Деструктор -----------------*/
    Card(); //Конструктор за замовчуванням
    Card(const char* name, const char* expiredDate, double cash = 0); //Конструктор з параметрами
    ~Card(); //Деструктор


    /*--------- Аксесори (get+set) -----------------*/
    unsigned long getCardNumber();
    const char* getName();
    const char* getExpDate();
    unsigned short getPIN();
    double getCash();

    bool setPIN(int oldPIN, int newPIN);


    void showInfo();
};


#endif //P53_T12_INTRO_OOP_CARD_H
