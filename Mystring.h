//
// Created by Javier Zarate on 11/7/17.
//

#ifndef MODULE8_MYSTRING_H

#include <iostream>

#define MODULE8_MYSTRING_H
using namespace std;

class Mystring
{
private:
    char *str;
public:
    Mystring(char *s);        //const, one argument
    ~Mystring();              //destructor

    void display();           //display string
    void updateString(char* newStr);
};


#endif //MODULE8_MYSTRING_H
