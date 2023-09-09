#pragma once
#include "Expense.h"
#include <string>
#include <vector>
using namespace std;
class Credit_Card
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
	Credit_Card();
	Credit_Card(int balance, string name, bool status);
	void printCardStatus();
	int getCardNumber();
	~Credit_Card() {};

	vector<Expense>& getExpensesVector();
	Expense getExpense(int index);
	void addExpense(const Expense& expense);
	int getExpensesCount();
};

