// File: FileInOut
// Created by Javier Zarate on 11/30/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <fstream> //file steam lib
#include <vector>
using namespace std;

// Main Program Program
int main(void)
{
    ifstream inFS;      //input file stream
    ofstream outFS;     //output file stream
    int fileNum1 = 0;
    int fileNum2 = 0;
    vector<int> nums;

    //try to open the file
    cout<<"opening file myfile.txt."<<endl;
    inFS.open("../myfile.txt"); //relative path to exe to file

    if(!inFS.is_open())
    {
        cout<<"Could not open file myfile.txt"<<endl;
        return 1;
    }
    //now use inFS
    cout<<"reading two integers"<<endl;
//    inFS>>fileNum1;
//    inFS>>fileNum2;
//    cout<<"num1 "<<fileNum1<<endl;
//    cout<<"num1 "<<fileNum2<<endl;
    //by hand
//    inFS>>fileNum1;
//    nums.push_back(fileNum1);
//    inFS>>fileNum1;
//    nums.push_back(fileNum1);
        //using a loop
    while(!inFS.eof())
    {
        inFS>>fileNum1;
        //check previous stream operation had no problems
        if(inFS.good())
        {
            cout<<"num: "<<fileNum1<<endl;
        }
        else
        {
            cout<<"bad record"<<endl;
        }
        nums.push_back(fileNum1);
    }
    cout<<"opening file myoutfile.txt."<<endl;
    outFS.open("../myoutfile.txt"); //relative path to exe to file

    if(!inFS.is_open())
    {
        cout<<"Could not open file myoutfile.txt"<<endl;
        return 1;
    }
    //dsplay items
    for(auto item:nums)
    {
        cout<<item<<endl;   //write to stream
        outFS<<item<<endl;  //write to file
    }


    inFS.close();
    outFS.close();
    return 0;

}

// Function Definitions