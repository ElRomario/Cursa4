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
	cout << "��� �����: " << name << endl;
	cout << "������: " << balance << endl;
	cout << "������ ����� :";
	string stat = "";
	status == true ? stat = "�������" : stat = "�������������";
	cout << stat << endl;
}

void Internet_Wallet::printCardStatus()
{
	cout << "��� �����: " << name << endl;
	cout << "������: " << balance << endl;
	cout << "������ ����� :";
	string stat = "";
	status == true ? stat = "�������" : stat = "�������������";
	cout << stat << endl;
}


