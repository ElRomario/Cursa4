#pragma once
#include "Expense.h"
#include <string>
#include <vector>
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
	~Credit_Card() {};
};

