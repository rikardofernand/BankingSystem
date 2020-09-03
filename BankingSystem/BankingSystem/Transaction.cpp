#include "Transaction.h"
#include <iostream>
#include "Checking.h"

void transaction(Account* pAccount)
{
	std::cout << "Transaction started" << std::endl;
	std::cout << "Initial balance: "<< pAccount->getBalance() << std::endl;
	pAccount->deposit(100);
	pAccount->accumulateInterest();
	
	//if (typeid(*pAccount) == typeid(Checking) ) {
	//	//create a pointer for Cheacking and aply a downcast	
	//	Checking* pChecking = static_cast<Checking*>(pAccount);
	//	std::cout << "Minimum Balance is: " << pChecking->getMinimumBalance() << std::endl;
	//}

	// should be avoided because causes overhead on the progam  
	Checking* pChecking = dynamic_cast<Checking*>(pAccount);
	if (pChecking != nullptr) {
		std::cout << "Minimum balance of Checking: " << pChecking->getMinimumBalance() << std::endl;
	}

	pAccount->withDraw(170);
	std::cout << "Interest rate: " << pAccount->getInterestRate() << std::endl;
	std::cout << "Final Balance: " << pAccount->getBalance() << std::endl;
}
