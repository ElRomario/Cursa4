#include "Internet_Wallet.h"

Internet_Wallet::Internet_Wallet()
{
	balance = 0;
	name = "";
	status = false;
}

Internet_Wallet::Internet_Wallet(int balance, string name, bool status)
{
	this->balance = balance;
	this->name = name;
	cout << "Имя карты: " << name << endl;
	cout << "Баланс: " << balance << endl;
	cout << "Статус счета :";
	string stat = "";
	status == true ? stat = "Активна" : stat = "Заблокирована";
	cout << stat << endl;
}

void Internet_Wallet::printCardStatus()
{
	cout << "Имя счета: " << name << endl;
	cout << "Баланс: " << balance << endl;
	cout << "Статус счета :";
	string stat = "";
	status == true ? stat = "Активна" : stat = "Заблокирована";
	cout << stat << endl;
}


