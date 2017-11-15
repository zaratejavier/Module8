// File: FreeStore
// Created by Javier Zarate on 11/14/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include "Resource.h"

using namespace std;
// Constants, struct, classes
// Prototypes
// Main Program Program

int main(void)
{
    {
        Resource localResource(" local");
        string localString = localResource.GetName();
    }
    Resource *pResource = new Resource("Create with new");
    string newString = pResource->GetName();
    cout<<newString<<endl;

    int j = 3;
    if( j==2)
    {
        delete pResource;
        return 1;
    }
    //clean
    Resource *p2 = pResource;       //pointer resource to a pointer resource
    string s3 = p2->GetName();
    cout<<"s3: "<<s3<<endl;

    delete pResource;
    string s4 = pResource->GetName();
    cout<<"s4: "<<s4<<endl;   //should not be there??
    pResource = nullptr;
    delete pResource;       //crashes your system, delete twice
    delete p2;

    cout<<"Done"<<endl;
    return 0;

}

// Function Definitions