#include "Internet_Wallet.h"
#include <iostream>

using namespace std;

Internet_Wallet::Internet_Wallet()
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

Internet_Wallet::Internet_Wallet(int balance, string name, bool status)
{
	cardIDCounter++;
	cardNumber = cardIDCounter;
	this->balance = balance;
	this->name = name;
	this->status = status;
}
void Internet_Wallet::printCardStatus()
{
	cout << "ID ��������: " << cardNumber << endl;
	cout << "��� �����: " << name << endl;
	cout << "������: " << balance << endl;
	cout << "������ ����� :";
	string stat = "";
	status == true ? stat = "�������" : stat = "�������������";
	cout << stat << endl << endl;
}
int Internet_Wallet::getCardNumber()
{
	return cardNumber;
}
vector<Expense>& Internet_Wallet::getExpensesVector()
{
	return Expenses;
}
Expense Internet_Wallet::getExpense(int index)
{
	return Expenses[index];
}
void Internet_Wallet::addExpense(const Expense& expense)
{
	Expenses.push_back(expense);
}
int Internet_Wallet::getExpensesCount()
{
	return Expenses.size();
}
int Internet_Wallet::cardIDCounter = 0;


