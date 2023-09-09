#include "Credit_Card.h"
#include <iostream>
using namespace std;
Credit_Card::Credit_Card()
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
	cout << "ID карты: " << cardNumber << endl;
	cout << "Имя карты: " << name << endl;
	cout << "Баланс: " << balance << endl;
	cout << "Имя карты: " << name << endl;
	cout << "Баланс: " << balance << endl;
	cout << "Статус счета :";
	string stat = "";
	status == true ? stat = "Активна" : stat = "Заблокирована";
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
