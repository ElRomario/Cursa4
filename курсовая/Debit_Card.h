#pragma once
#include <string>
#include "Credit_Card.h"
#include "Expense.h"
#include "Internet_Wallet.h"
#include "Wallet.h"

class Debit_Card
{
private:
	int balance;
	string name;
	bool status;
	vector<Expense>debitExpences;
	friend class Wallet;
public:
	Debit_Card();
	Debit_Card(int balance, string name, bool status);
	void printCardStatus();

};

