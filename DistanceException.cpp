// File: DistanceException.cpp
// Created by Javier Zarate on 11/9/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include "Distance.h"
using namespace std;

// Main Program Program
int main(void)
{
    try
    {
        Distance d1(17, 3.5);
        Distance d2;
        //d1.getDistance();
        d2.getDistance();

        cout<<"\nD1= ";
        d1.showDistance();
        cout<<"\nD2= ";
        d2.showDistance();
    }
    catch(Distance::inchesEx)   //catch exception
    {
        cout<<"intialization error "
            "inches vlaue too large";
    }
    // continue here
    cout<<"\nMore work here. I am not dead"<<endl;
    return 0;

}

// Function Definitions