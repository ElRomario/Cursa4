#include "Credit_Card.h"

Credit_Card::Credit_Card()
{
	balance = 0;
	name = "";
	status = false;
}

Credit_Card::Credit_Card(int balance, string name, bool status)
{
	cout << "��� �����: " << name << endl;
	cout << "������: " << balance << endl;
	cout << "������ ����� :";
	string stat = "";
	status == true ? stat = "�������" : stat = "�������������";
	cout << stat << endl;
}


void Credit_Card::printCardStatus()
{
	cout << "��� �����: " << name << endl;
	cout << "������: " << balance << endl;
	cout << "��� �����: " << name << endl;
	cout << "������: " << balance << endl;
	cout << "������ ����� :";
	string stat = "";
	status == true ? stat = "�������" : stat = "�������������";
	cout << stat << endl;
}
