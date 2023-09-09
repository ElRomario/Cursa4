#include "Debit_Card.h"

#include <iostream>
using namespace std;

Debit_Card::Debit_Card()
{
	cout << "    �������� ����� �����!" << endl;
	cardIDCounter++;
	cardNumber = cardIDCounter;
	int _balance = 0;
	cout << "    ������� ������ �����: ";
	cin >> balance;
	string _name;
	cout << "    ������� ��� �����: ";
	cin >> _name;
	string _status;
	cout << "    ����� ������ �����? ������� ���, ����� ������������ �����, ������� ����, ����� �������������: ";
	cin >> _status;

	name = _name;
	balance = _balance;

	if (_status == "���") status = true;
	else if (_status == "����") status = false;
}

Debit_Card::Debit_Card(int balance, string name, bool status)
{

	cardIDCounter++;
	cardNumber = cardIDCounter;
	this->balance = balance;
	this->name = name;
	this->status = status;
}


void Debit_Card::printCardStatus()
{
	cout << "ID �����: " << cardNumber << endl;
	cout << "��� �����: " << name << endl;
	cout << "������: " << balance << endl;
	cout << "������ ����� :";
	string stat = "";
	status == true ? stat = "�������" : stat = "�������������";
	cout << stat << endl << endl;
}
int Debit_Card::getCardNumber()
{
	return cardNumber;
}
vector<Expense>& Debit_Card::getExpensesVector()
{
	return Expenses;
}
Expense Debit_Card::getExpense(int index)
{
	return Expenses[index];
}
void Debit_Card::addExpense(const Expense& expense)
{
	Expenses.push_back(expense);
}
int Debit_Card::getExpensesCount()
{
	return 0;

}
int Debit_Card::cardIDCounter = 0;
