#pragma once
#include <string>
using namespace std;
class Expense
{
private:
	string name;
	int amount;

public:
	Expense() {};
	Expense(string name, int amount);
	int getAmount();
	string getName();

	friend class DebitCard;
	friend class Internet_Wallet;
	friend class Credit_Card;

};

