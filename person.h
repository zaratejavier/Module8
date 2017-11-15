//
// Created by Javier Zarate on 11/14/17.
//

#ifndef MODULE8_PERSON_H
#include <iostream>
#define MODULE8_PERSON_H
using namespace std;

class person
{
private:
    string firstName;
    string lastName;
    int arNUmber;
public:
    person(string fn, string ln, int an);
    ~person();
    string GetName() const;     // return first + last

    // Setter and getter for the arNumber
    int getArNUmber() const;
    void setArNUmber(int arNUmber);

    //Operator overload for < and >
    bool operator < (person &p) const;
    bool operator < (int n) const;
    friend bool operator < (int n, const person &p);
    //these should work with: 1) int < person
    // 2) person < int, 3) int > person, 4) person > int
};
bool operator < (int i, const person &p);


#endif //MODULE8_PERSON_H
