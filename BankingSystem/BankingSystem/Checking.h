#pragma once
#include "Account.h"

class Checking :
    public Account
{
 public: 
     using Account::Account; // use the constructor from base class
     //Checking(const std::string &name, float balance);
     ~Checking();

    void withDraw(float amount);


};

