#pragma once
#include "Account.h"

class Checking :
    public Account
{
    float minimumBalance;
 public: 
     //using Account::Account; // use the constructor from base class
     Checking(const std::string &name, float balance, float minBalance);
     ~Checking();

    void withDraw(float amount);

    float getMinimumBalance() const; 

};

