//
// Created by Javier Zarate on 11/7/17.
//
#include <iostream>
using namespace std;
#include "Mystring.h"
#include <cstring>

Mystring::Mystring(char *s)
{
    int length = strlen(str);       //length of input string
    //get momory
    str= new char[length+1];
    strcpy(str, s);                //copy argument to new allocated space, and save address to str

}

Mystring::~Mystring()
{
    cout<<"deleting memory"<<endl;
    delete [] str;
}

void Mystring::display()
{
    cout<<str<<endl;
}
/*!
 * update string. this will allocate new memory.
 * Change my pointer to the new space
 * Delete old memory
 * @param newStr: New string to update
 */
void Mystring::updateString(char *newStr)
{
    int length = strlen(newStr);

    char *temp= new char(length+1);
    strcpy(temp, newStr);
    cout<<"deleting old memory"<<endl;
    delete[] str;       //delete
    str = temp;         //point to new allocated space
}
