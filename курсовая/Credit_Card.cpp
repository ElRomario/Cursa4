#include "Credit_Card.h"
#include <iostream>
using namespace std;
Credit_Card::Credit_Card()
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

Credit_Card::Credit_Card(int balance, string name, bool status)
{
	cardIDCounter++;
	cardNumber = cardIDCounter;
	this->balance = balance;
	this->name = name;
	this->status = status;
}


void Credit_Card::printCardStatus()
{
	cout << "ID �����: " << cardNumber << endl;
	cout << "��� �����: " << name << endl;
	cout << "������: " << balance << endl;
	cout << "��� �����: " << name << endl;
	cout << "������: " << balance << endl;
	cout << "������ ����� :";
	string stat = "";
	status == true ? stat = "�������" : stat = "�������������";
	cout << stat << endl << endl;
}
int Credit_Card::getCardNumber()
{
	return cardNumber;
}
vector<Expense>& Credit_Card::getExpensesVector()
{
	return Expenses;
}
Expense Credit_Card::getExpense(int index)
{
	return Expenses[index];
}
void Credit_Card::addExpense(const Expense &expense)
{
	Expenses.push_back(expense);
}
int Credit_Card::getExpensesCount()
{
	return Expenses.size();

}
int Credit_Card::cardIDCounter = 0;
