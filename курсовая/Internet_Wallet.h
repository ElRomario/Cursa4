#pragma once
#include <string>
#include "Expense.h"
#include "Debit_Card.h"
#include "Credit_Card.h"
#include "Wallet.h"
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
	
};

