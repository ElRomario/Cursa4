#pragma once
#include "Expense.h"
#include <string>
#include <vector>

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
	~Debit_Card(){};

};

