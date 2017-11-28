//
// Created by Javier Zarate on 11/21/17.
//

#ifndef MODULE8_BANKACCOUNT_H

#include <iostream>

#define MODULE8_BANKACCOUNT_H


using namespace std;

class bankAccount
{
private:
    int BalanceInPennies;   // TODO
public:
    bankAccount();
    ~bankAccount();

    bool operator < (const bankAccount &b1);

    int getBalanceInPennies() const;

    void setBalanceInPennies(int BalanceInPennies);


};


#endif //MODULE8_BANKACCOUNT_H
