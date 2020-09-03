#include "Transaction.h"
#include <iostream>

void transaction(Account* pAccount)
{
	std::cout << "Transaction started" << std::endl;
	std::cout << "Initial balance: "<< pAccount->getBalance() << std::endl;
	pAccount->deposit(0);
	pAccount->accumulateInterest();
	pAccount->withDraw(0);
	std::cout << "Interest rate: " << pAccount->getInterestRate() << std::endl;
	std::cout << "Final Balance: " << pAccount->getBalance() << std::endl;
}
