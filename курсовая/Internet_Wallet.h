#pragma once
#include "Expense.h"
#include <vector>
#include <string>
using namespace std;
class Internet_Wallet
{
private:
	static int cardIDCounter;
	int cardNumber;
	int balance;
	string name;
	bool status;
	vector<Expense>Expenses;
	friend class Wallet;

public:
	Internet_Wallet();
	Internet_Wallet(int balance, string name, bool status);
	void printCardStatus();
	int getCardNumber();
	~Internet_Wallet() {};

	vector<Expense>& getExpensesVector();
	Expense getExpense(int index);
	void addExpense(const Expense& expense);
	int getExpensesCount();
	
};

