#include "Debit_Card.h"



Debit_Card::Debit_Card()
{
	balance = 0;
	name = "";
	status = false;
}

Debit_Card::Debit_Card(int balance, string name, bool status)
{
	cout << "��� �����: " << name << endl;
	cout << "������: " << balance << endl;
	cout << "������ ����� :";
	string stat = "";
	status == true ? stat = "�������" : stat = "�������������";
	cout << stat << endl;
}



void Debit_Card::printCardStatus()
{
	cout << "��� �����: " << name << endl;
	cout << "������: " << balance << endl;
	cout << "������ ����� :";
	string stat = "";
	status == true ? stat = "�������" : stat = "�������������";
	cout << stat << endl;
}
