#pragma once
#include <string>
using namespace std;
class Expense
{
private:
	string name;
	int amount;
	string date;

public:
	Expense();
	Expense(string name, int amount, string date);
	int getAmount();
	string getName();
	void printExpense();

	friend class DebitCard;
	friend class Internet_Wallet;
	friend class Credit_Card;

};

