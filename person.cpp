//
// Created by Javier Zarate on 11/14/17.
//

#include "person.h"

using namespace std;

person::person(string fn, string ln, int an)
{
    firstName = fn;
    lastName = ln;
    arNUmber = an;
}

int person::getArNUmber() const
{
    return arNUmber;
}

void person::setArNUmber(int arNUmber)
{
    person::arNUmber = arNUmber;
}

person::~person()
{

}
/*!
 * compare person<person
 * @param p: reference to person
 * @return : true or false
 */
bool person::operator<(person &p) const
{
    return arNUmber<p.arNUmber;
}

string person::GetName() const
{
    return firstName + " " + lastName;
}
/*!
 * compare person < integer
 * @param n: integer
 * @return : true or false
 */
bool person::operator<(int n) const
{
    return arNUmber<n;
}
/*!
 * compare and integer < person
 * @param n : integer
 * @param p : reference to person
 * @return : true or false
 */
bool operator<(int n, const person &p)
{
    return n < p.arNUmber;
}
