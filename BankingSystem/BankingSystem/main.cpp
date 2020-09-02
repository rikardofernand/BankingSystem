#include <iostream>
#include "Account.h"

int main() 
{
	Account acc("John", 1000);
	std::cout << "Initial balance: " << acc.getBalance() << std::endl;
	acc.deposit(200);
	acc.accumulateInterest();
	acc.withDraw(380);
	std::cout << "Balance: " << acc.getBalance() << std::endl;
	return 0;
}