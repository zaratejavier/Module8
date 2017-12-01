//
// Created by Javier Zarate on 11/14/17.
//

#ifndef MODULE8_PERSON_H
#include <iostream>
#include <memory>   //for smart pointers
#include "Resource.h"
#define MODULE8_PERSON_H
using namespace std;

class person
{
private:
    string firstName;
    string lastName;
    int arNUmber;
    //Resource *pResource;
    shared_ptr<Resource>pResource;  //declare a shared pointer
public:
    person(string fn, string ln, int an);

    person();

    ~person();
    //person(const person &p);    //copy constructor
    string GetName() ;     // return first + last


    // Setter and getter for the arNumber
    int getArNUmber();
    void setArNUmber(int arNUmber);

    const string &getFirstName() ;

    void setFirstName(const string &firstName);

    //Operator overload for < and >
    bool operator < (person &p) ;
    bool operator < (int n) ;
    friend bool operator < (int n, const person &p);
    //these should work with: 1) int < person
    // 2) person < int, 3) int > person, 4) person > int
    void AddResource();
    //person&operator = (const person &p);
    string GetResourceName();

    friend ostream &operator<<(ostream &os, const person &person1);
};
bool operator < (int i, const person &p);


#endif //MODULE8_PERSON_H
