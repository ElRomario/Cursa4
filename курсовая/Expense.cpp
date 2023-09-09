#include "Expense.h"
#include <iostream>

using namespace std;

Expense::Expense()
{
	cout << "    �������� ������ �������!" << endl;
	string inputName;
	int inputAmount;
	string inputDate;
	cout << "      ������� ���������� �������: ";
	cin >> inputName;
	cout << "      ������� ������: ";
	cin >> inputAmount;
	cout << "      ������� ���� �������: ";
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
	cout << "�������� ����������: ";
	cout << name << endl;
	cout << "����������: ";
	cout << amount << endl;
	cout << "����: ";
	cout << date << endl << endl;
}
