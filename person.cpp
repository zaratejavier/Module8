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
    //pResource = NULL; // prior to c++11
    //no need for smart pointers
    //pResource = nullptr;    // c++11
}

int person::getArNUmber() const
{
    return arNUmber;
}

void person::setArNUmber(int arNUmber)
{
    person::arNUmber = arNUmber;
}
/*!
 * destructor. clean memory
 */
person::~person()
{
   // delete[] pResource; // if pResource points to an array
   // delete pResource;
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
/*!
 * get person name
 * @return : person's object name
 */
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

void person::AddResource()
{
    //Resource r("Hello");
    //pResource =  &r;  //it only lives in this block
    //delete pResource; //not needed
    pResource.reset();
    //pResource = new Resource("Resource for "+ GetName());   //this will survive
    pResource = make_shared<Resource>("Resource for "+ GetName());
}

const string &person::getFirstName() const
{
    return firstName;
}

void person::setFirstName(const string &firstName)
{
    person::firstName = firstName;
}
///*!
// * copy constructor.
// * @param p : person object to be copy
// */
//person::person(const person &p)
//{
//    firstName = p.firstName;
//    lastName = p.lastName;
//    arNUmber = p.arNUmber;
//    //do not copy the reference. you need to
//    // create your own memory. your own copy
//    pResource = new Resource(p.pResource->GetName());
//}

//person &person::operator=(const person &p)
//{
//    firstName = p.firstName;
//    lastName = p.lastName;
//    arNUmber = p.arNUmber;
//
//    delete pResource;
//    pResource = new Resource(p.pResource->GetName());
//
//    return *this;   //return yourself.
//}
