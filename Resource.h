//
// Created by Javier Zarate on 11/14/17.
//

#ifndef MODULE8_RESOURCE_H
#include <iostream>
#define MODULE8_RESOURCE_H
using namespace std;

class Resource
{
private:
    string name;
public:
    Resource(string n);
    ~Resource();
    string GetName() const;

};


#endif //MODULE8_RESOURCE_H
