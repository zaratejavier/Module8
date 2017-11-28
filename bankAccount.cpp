//
// Created by Javier Zarate on 11/21/17.
//

#include "bankAccount.h"

using namespace std;

bankAccount::bankAccount()
{
    cout<<"constructor ban account"<<endl;
}

int bankAccount::getBalanceInPennies() const
{
    return BalanceInPennies;
}

void bankAccount::setBalanceInPennies(int BalanceInPennies)
{
    bankAccount::BalanceInPennies = BalanceInPennies;
}

bool bankAccount::operator<(const bankAccount &b1)
{
    return BalanceInPennies < b1.getBalanceInPennies();
}
