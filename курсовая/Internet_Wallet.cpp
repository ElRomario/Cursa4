#include "Internet_Wallet.h"
#include <iostream>

using namespace std;

Internet_Wallet::Internet_Wallet()
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
	cout << "ID кошелька: " << cardNumber << endl;
	cout << "Имя счета: " << name << endl;
	cout << "Баланс: " << balance << endl;
	cout << "Статус счета :";
	string stat = "";
	status == true ? stat = "Активна" : stat = "Заблокирована";
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


