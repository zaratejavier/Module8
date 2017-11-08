
// File: strClass
// Created by Javier Zarate on 11/7/17 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "Mystring.h"

using namespace std;
// Constants, struct, classes
// Prototypes
// Main Program Program

int main()
{
    Mystring s1 = "who knows nothing doubts nothing";
    cout<<"s1 = ";s1.display();
    s1.updateString("now this is what i call music");
    cout<<"now s1 = ";s1.display();
    return 0;
}

// Function Definitions