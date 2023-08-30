#include "Credit_Card.h"
#include <iostream>
using namespace std;
Credit_Card::Credit_Card()
{
	balance = 0;
	name = "";
	status = false;
}

Credit_Card::Credit_Card(int balance, string name, bool status)
{
	cout << "Имя карты: " << name << endl;
	cout << "Баланс: " << balance << endl;
	cout << "Статус счета :";
	string stat = "";
	status == true ? stat = "Активна" : stat = "Заблокирована";
	cout << stat << endl;
}


void Credit_Card::printCardStatus()
{
	cout << "Имя карты: " << name << endl;
	cout << "Баланс: " << balance << endl;
	cout << "Имя карты: " << name << endl;
	cout << "Баланс: " << balance << endl;
	cout << "Статус счета :";
	string stat = "";
	status == true ? stat = "Активна" : stat = "Заблокирована";
	cout << stat << endl;
}
