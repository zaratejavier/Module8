// File: Exception1.cpp
// Created by Javier Zarate on 11/9/17 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

const int MAX=3;
// Constants, struct, classes
class Stack
{
private:
    int st[MAX];
public:
    class range     //exception class for stack
    {
        //note: empty
    };
    Stack()     // constructor
    {top= -1};

    void push(int var)
    {
        if(top>=MAX -1) //if the stack is full
            throw Range();  //throw the exception
        st[++top] = var;    //put number on stack
    }
    int pop()
    {
        if(top<0)
            throw Range();  //throw exception
        return st[top--];
    }
};
// Prototypes
// Main Program Program
int main(void)
{
    Stack s1;
    try
    {
        s1.push(11);
        s1.push(12);
        s1.push(13);
        s1.push(14);        //stack is FULL
        cout<<"1: "<<s1.pop()<<endl;
        cout<<"2: "<<s1.pop()<<endl;
        cout<<"3: "<<s1.pop()<<endl;
        cout<<"4: "<<s1.pop()<<endl;
    }
    catch (Stack::Range) //excption handler
    {
        cout<<"Exception: stack full or empty"<<endl;

    }
    cout<<"I am done"<<endl;
    return 0;

}

// Function Definitions