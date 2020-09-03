#include "Checking.h"
#include <iostream>


Checking::Checking(const std::string& name, float balance, float minBalance): minimumBalance(minBalance), Account(name,balance)
{
}

Checking::~Checking()
{
}

void Checking::withDraw(float amount)
{
	if ((m_Balance - amount) > minimumBalance)
		Account::withDraw(amount);
	else
		std::cout << "Invalid amount"<<std::endl;
}

float Checking::getMinimumBalance() const
{
	return minimumBalance;
}

