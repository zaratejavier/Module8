//TEST MATERIAL!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// File: dynamicIntArray
// Created by Javier Zarate on 11/7/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants, struct, classes
// Prototypes
// Main Program Program

int main(void)
{
    double sum = 0;
    int size;
    //1) capture input
    cout<<"how many number do you want to store?";
    cin>>size;

    //2) allocate array of doubles based on input
    double *info = new double [size];

    //3) fill in the values
    for (int i =0; i <size; ++i )
    {
        cout<<"enter a double value: ";
        cin>>info[i];
    }

    //4) display values
    //      keep track of some of them
    for (int i =0; i <size; ++i )
    {
        cout<<i<<" values: "<<info[i]<<endl;
        sum += info[i];
    }

    //5) display sum
    cout<<"the sum is: "<<sum<<endl;

    //6) clean your mess
    delete[] info;
    return 0;

}

// Function Definitions