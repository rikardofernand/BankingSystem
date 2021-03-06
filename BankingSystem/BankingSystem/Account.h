#pragma once
#include <string>

class Account
{
	std::string m_Name;
	int m_AccNo;
	static int s_ANGenerator;
protected:
	float m_Balance;
public:
	Account(const std::string& name, float balance );
	virtual ~Account();
	const std::string getName()const;
	float getBalance()const;
	int getAccountN()const;

	virtual void accumulateInterest();
	virtual void withDraw(float amount);
	void deposit(float amount);
	virtual float getInterestRate()const;

};

