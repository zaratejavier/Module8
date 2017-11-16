// File: memory
// Created by Javier Zarate on 11/16/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include "person.h"

using namespace std;

// Main Program Program

int main()
{
    person Waldo("Waldo", "Weber", 123);
    Waldo.AddResource();
    Waldo.setFirstName("WaldoJr");
    Waldo.AddResource();

    person WaldoSr = Waldo;

    Waldo = WaldoSr;



    return 0;

}

// Function Definitions