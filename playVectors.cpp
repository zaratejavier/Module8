// File: playVectors
// Created by Javier Zarate on 11/28/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <vector>
#include "person.h"
#include <map>

using namespace std;
// Constants, struct, classes
// Prototypes
// Main Program Program

int main(void)
{
    vector<int> v;
    v.push_back(3); //add a member with push back
    v.push_back(99); //add a member with push back
    v.push_back(-23); //add a member with push back
    v.push_back(6); //add a member with push back

    //cout<<v[0]<<endl;
    // "auto" figures out what the return type is
    //using auto
    for ( auto i = v.begin(); i != v.end(); i++)
    {
        cout<<*i<<" ";

    }
    cout<<endl;


    //using index notation
    for ( unsigned int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;

    //using directly an iterator
    for(auto item:v)
    {
            cout<<item<<" ";

    }
    cout<<endl;

    //using directly an iterator with reverse range
    for(auto i = v.rbegin(); i != v.rend(); i++)
    {
        cout<<*i<<" ";

    }
    cout<<endl;

    // display the max, min, and sort your array
    sort(begin(v), end(v));
    for(auto item:v)
    {
        cout<<item<<" ";

    }
    cout<<endl;

    auto result = max_element(begin(v), end(v));
    //cout<<"max is "<< v[distance(v.begin(), result)] <<endl;
    cout<<"max is "<< *result <<endl;

    result = min_element(begin(v), end(v));
    cout<<"max is "<< *result <<endl;

    //now a vector of objects
    vector<person> vp;
    person Waldo ("Waldo", "Weber", 123);
    person Vandy("Vandy", "Vanderbilt", 678);
    vp.push_back(Waldo);
    vp.push_back(Vandy);

    //use iterator to get objects
    for(auto ip = vp.begin(); ip != vp.end(); ip++)
    {
        cout<<ip->GetName()<<endl;
        //this requires your object to have
        // output << operator defined
        cout<<*ip<<endl;

    }
    cout<<Waldo<<endl;
    //Now, lets talk about Maps
    map<int, person> people;
    //      key<int>            = value <person>
    people[Waldo.getArNUmber()] = Waldo;
    //if the key exist, you update thh value,
    //ELSE you create the value
    people[Vandy.getArNUmber()]= Vandy;

    person Elmo("Elmo", "Street", 100);
    people[123]= Elmo;
    people[124]= Elmo;
    for(auto item:people)
    {
        // the two componets of my map are:
        // key-> first          value->second
        cout<<item.first<< " "<<item.second.getFirstName()<<endl;
    }





    return 0;

}

// Function Definitions