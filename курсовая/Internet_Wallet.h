#pragma once
#include "Expense.h"
#include <vector>
#include <string>
class Internet_Wallet
{
private:
	int balance;
	string name;
	bool status;
	vector<Expense>internetExpenses;
	friend class Wallet;

public:
	Internet_Wallet();
	Internet_Wallet(int balance, string name, bool status);
	void printCardStatus();
	~Internet_Wallet() {};
	
};

