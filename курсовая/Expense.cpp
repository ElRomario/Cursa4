#include "Expense.h"

Expense::Expense(string name, int amount)
{
	this->name = name;
	this->amount = amount;
}

int Expense::getAmount()
{
	return amount;
}

string Expense::getName()
{
	return name;
}
