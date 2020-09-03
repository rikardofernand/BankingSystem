#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"
#include <typeinfo>

int main() 
{
	//Savings acc("John", 100,0.05);
	//transaction(&acc);
	/*std::cout << "Initial balance: " << acc.getBalance() << std::endl;
	acc.deposit(200);
	acc.accumulateInterest();
	acc.withDraw(1110);
	std::cout << "Balance: " << acc.getBalance() << std::endl;*/
	
	Checking ch("Carlos", 200, 100);
	transaction(&ch);
	
	/*Account* p = &ch;

	int i{};
	float f{};

	const std::type_info& ti = typeid(p);

	if (ti == typeid(Savings)) {
		std::cout << "Points to savings\n";
	}
	else {
		std::cout << "Not pointing to savings\n";
	}

	std::cout << ti.name() << std::endl;*/


	return 0;
}