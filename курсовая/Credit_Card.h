#pragma once
#include <string>
#include "Expense.h"
#include "Internet_Wallet.h"
#include "Debit_Card.h"
#include "Wallet.h"
class Credit_Card
{

private:
	int balance;
	string name;
	bool status;
	vector<Expense>creditExpenses;
	friend class Wallet;

public:
	Credit_Card();
	Credit_Card(int balance, string name, bool status);
	void printCardStatus();
};

