


// File: Accumulator

// Created by Javier Zarate on 11/21/17 for CS1410.


// Copyright (c) 2017 WSU

//


#include <iostream>
#include "Accum.h"
#include "person.h"
using namespace std;
// Constants, struct, classes
// Prototypes
// Main Program Program

int main(void)
{
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout<<integers.GetTotal()<<endl;

    Accum<string> mystring("");
    mystring += "hello";
    mystring += " world";
    cout<<mystring.GetTotal()<<endl;

    //integers += "Weber"; //types must match
    //mystring += 4;

    //template specialization
    // this is not needed if you have template specialization
    //  person start("", "", 0)
    //  Accum<person> people(start);
    Accum<person> people(0);
    person p1("Waldo", " Weber ", 123);
    person p2("Ogden", " Rocks ", 789);

    people+=p1;
    people+=p2;
    //cout<<people.GetTotal().getArNUmber()<<endl;
    cout<<people.GetTotal()<<endl;

    return 0;

}

// Function Definitions