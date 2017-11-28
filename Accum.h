//
// Created by Javier Zarate on 11/21/17.
//

#ifndef MODULE8_ACCUM_H

#include <iostream>
#include "person.h"

#define MODULE8_ACCUM_H


using namespace std;

template <class T>
class Accum
{
private:
    T total;
public:
    Accum(T start): total(start){};
    T operator += (const T& t)
    {
        return total = total + t;
    }
    T GetTotal()
    {
        return total;
    }
};
//template specialization
template <>
class Accum <person>
{
private:
    int total;
public:
    Accum(int start): total(start){};

    int operator += (person& t)
    {
        return total = total + t.getArNUmber();
    }
    int GetTotal(){ return total;}
};


#endif //MODULE8_ACCUM_H
