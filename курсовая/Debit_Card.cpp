#include "Debit_Card.h"



Debit_Card::Debit_Card()
{
	balance = 0;
	name = "";
	status = false;
}

Debit_Card::Debit_Card(int balance, string name, bool status)
{
	cout << "Имя карты: " << name << endl;
	cout << "Баланс: " << balance << endl;
	cout << "Статус счета :";
	string stat = "";
	status == true ? stat = "Активна" : stat = "Заблокирована";
	cout << stat << endl;
}



void Debit_Card::printCardStatus()
{
	cout << "Имя карты: " << name << endl;
	cout << "Баланс: " << balance << endl;
	cout << "Статус счета :";
	string stat = "";
	status == true ? stat = "Активна" : stat = "Заблокирована";
	cout << stat << endl;
}
