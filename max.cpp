


// File: max

// Created by Javier Zarate on 11/21/17 for CS1410.


// Copyright (c) 2017 WSU

//


#include <iostream>

using namespace std;

#include "person.h"
#include "bankAccount.h"

// Constants, struct, classes
template <class T>
T max(T &t1, T &t2)
{
    return t1 < t2? t2: t1;
}

// Prototypes


// Main Program Program

int main(void)
{
    cout<<"Max of 33 and 44 is "<<max(33, 44)<<endl;
    string s1 = "hello";
    string s2 = "world";
    cout<<"the max of "<<s1<<" and "<<s2<<" is "<<max(s1, s2)<<endl;

    person p1("Waldo", "Weber", 123);
    person p2("Charlie", "Brown", 123);
    cout<<"the max of "<<p1.GetName() << " and "<<p2.GetName()
        <<" is "<<max(p1, p2).GetName()<<endl;

    bankAccount b1;
    b1.setBalanceInPennies(55);
    bankAccount b2;
    b1.setBalanceInPennies(11);
    cout<<"the max of "<<b1.getBalanceInPennies() << " and " <<b2.getBalanceInPennies()<< " is "
        <<max(b1, b2).getBalanceInPennies()<<endl;

    return 0;

}

// Function Definitions