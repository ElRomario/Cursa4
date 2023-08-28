#include "Wallet.h"



template <typename T>
void printAccount(const vector<T>& acc)
{
	for (int i = 0; i < acc.size(); i++)
	{
		acc[i].printCardStatus();
	}
}
void Wallet::printAllAccounts()
{
	cout << "===��������� �����===" << endl;
	printAccount(debitCardVector);
	cout << "===��������� �����===" << endl;
	printAccount(creditCardVector);
	cout << "===�������� ��������===" << endl;
	printAccount(internetWalletVector);
	
	
}
Wallet::Wallet() : debitCardVector(), creditCardVector(), internetWalletVector(){}

Wallet::Wallet(Debit_Card& card)
{
	debitCardVector.push_back(card);
}

Wallet::Wallet(Credit_Card& card)
{
	creditCardVector.push_back(card);
}

Wallet::Wallet(Internet_Wallet& card)
{
	internetWalletVector.push_back(card);
}



