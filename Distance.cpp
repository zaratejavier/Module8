//
// Created by Javier Zarate on 11/9/17.
//
#include <iostream>
#include "Distance.h"
using namespace std;

Distance::Distance(int f, float i)
{
    //Distance::feet= feet;
    //Distance::inches=inches;
    feet =f;
    inches =i;
}

Distance::Distance()
{
    feet= 0;
    inches=0.0;
}

void Distance::getDistance()
{
    cout<<"\nEnter feet: ";
    cin>>feet;
    cout<<"\nEnter inches: ";
    cin>>inches;
    if(inches>=12.0)    //too big
    {
        throw inchesEx();
    }
}

void Distance::showDistance()
{
    cout<<feet<<"\'-"<<inches<<"\"";
}
