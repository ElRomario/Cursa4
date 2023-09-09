#include "Debit_Card.h"

#include <iostream>
using namespace std;

Debit_Card::Debit_Card()
{
	cout << "    Создание новой карты!" << endl;
	cardIDCounter++;
	cardNumber = cardIDCounter;
	int _balance = 0;
	cout << "    Введите баланс карты: ";
	cin >> balance;
	string _name;
	cout << "    Введите имя карты: ";
	cin >> _name;
	string _status;
	cout << "    Какой статус карты? введите АКТ, чтобы активировать карту, введите БЛОК, чтобы заблокировать: ";
	cin >> _status;

	name = _name;
	balance = _balance;

	if (_status == "АКТ") status = true;
	else if (_status == "БЛОК") status = false;
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
	cout << "ID карты: " << cardNumber << endl;
	cout << "Имя карты: " << name << endl;
	cout << "Баланс: " << balance << endl;
	cout << "Статус счета :";
	string stat = "";
	status == true ? stat = "Активна" : stat = "Заблокирована";
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
