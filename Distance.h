//
// Created by Javier Zarate on 11/9/17.
//

#ifndef MODULE8_DISTANCE_H

#include <iostream>

#define MODULE8_DISTANCE_H


using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    class inchesEx{};   //exception class
    Distance();
    Distance(int f, float i);
    void getDistance();
    void showDistance();

};


#endif //MODULE8_DISTANCE_H
