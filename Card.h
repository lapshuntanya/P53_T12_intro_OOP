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
    unsigned long cardNumber;   //Номер картки
    char* name;                 //Ім’я власника
    char expiredDate[6];        //Дата дії
    unsigned short PIN;         //Код картки
    double cash;                //Сума грошей на картці

public:
    /*--------------- Методи (methods) ----------------------------*/
    /*--------- Конструктори -----------------*/
    Card(); //Конструктор за замовчуванням
    Card(const char* name, const char* expiredDate, double cash = 0); //Конструктор з параметрами
    ~Card(); //Деструктор


    void showInfo();
};


#endif //P53_T12_INTRO_OOP_CARD_H
