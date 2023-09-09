#include "Expense.h"
#include <iostream>

using namespace std;

Expense::Expense()
{
	cout << "    Создание нового расхода!" << endl;
	string inputName;
	int inputAmount;
	string inputDate;
	cout << "      Введите назначение расхода: ";
	cin >> inputName;
	cout << "      Введите расход: ";
	cin >> inputAmount;
	cout << "      Введите дату расхода: ";
	cin >> inputDate;

	
	name = inputName;
	date = inputDate;
	amount = inputAmount;


}

Expense::Expense(string name, int amount, string date)
{
	this->name = name;
	this->amount = amount;
	this->date = date;
}

int Expense::getAmount()													
{
	return amount;
}

string Expense::getName()
{
	return name;
}

void Expense::printExpense()
{
	cout << "Название транзакции: ";
	cout << name << endl;
	cout << "Количество: ";
	cout << amount << endl;
	cout << "Дата: ";
	cout << date << endl << endl;
}
