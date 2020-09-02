#include "Checking.h"
#include <iostream>

void Checking::withDraw(float amount)
{
	if ((m_Balance - amount) <= 50)
		std::cout << "Balance cannot be bellow 50";
	else
		m_Balance -= amount;
}
