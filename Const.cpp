// File: Const.cpp
// Created by Javier Zarate on 11/14/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include "person.h"
using namespace std;

// Constants, struct, classes


// Prototypes
int Double(const int& x);

// Main Program Program

int main(void)
{
    int i = 3;
    const int ci =3;
    i=4;

    int j = 10;
    int dj = Double(j);
    int d10 = Double(10);
    //cout<<d10<<endl;
    //cout<<dj<<endl;

    person Waldo("Waldo", "Weber", 234);
    Waldo.setArNUmber(456);
    //cout<<Waldo.getArNUmber()<<endl;
    const person cWaldo =  Waldo;

    //cWaldo.setArNUmber(987);  // constant object
    int wNumber = cWaldo.getArNUmber();
    //cout<<wNumber<<endl;


    int *pi = &i;
    //cout<<&i<<endl;
    //cout<<pi<<endl;
    const int *pci = &ci;       // pointer to const

    person *pWaldo = &Waldo;
    person someone( "Someone", "Else", 345);
    cout<<Waldo.GetName()<<endl;
    cout<<pWaldo->GetName()<<endl;  //use arrow operator





    return 0;

}

// Function Definitions
int Double(const int& x)
{
    return x * 2;
}