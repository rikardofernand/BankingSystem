#include "Checking.h"
#include <iostream>

//Checking::Checking(const std::string& name, float balance) :Account(name,balance)
//{
//}

Checking::~Checking()
{
}

void Checking::withDraw(float amount)
{
	if ((m_Balance - amount) > 50)
		Account::withDraw(amount);
	else
		std::cout << "Balance cannot be bellow 50"<<std::endl;
}
