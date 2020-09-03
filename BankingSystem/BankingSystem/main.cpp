#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"

int main() 
{
	Savings acc("John", 100,0.05);
	transaction(&acc);
	/*std::cout << "Initial balance: " << acc.getBalance() << std::endl;
	acc.deposit(200);
	acc.accumulateInterest();
	acc.withDraw(1110);
	std::cout << "Balance: " << acc.getBalance() << std::endl;*/
	return 0;
}