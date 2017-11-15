//
// Created by Javier Zarate on 11/14/17.
//

#include "Resource.h"

using namespace std;

Resource::Resource(string n)
{
    name = n;
    cout<<"constructing "<< name <<endl;
}

Resource::~Resource()
{
    cout<<"destructing "<< name <<endl;

}

string Resource::GetName() const
{
    return name;
}
