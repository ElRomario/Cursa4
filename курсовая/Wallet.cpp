#include "Wallet.h"



template <typename T>
void printAccount(vector<T>& acc)
{
	for (int i = 0; i < acc.size(); i++)
	{
		acc[i].printCardStatus();
	}
}
void Wallet::printAllAccounts()
{
	cout << "===Дебетовые карты===" << endl;
	printAccount(debitCardVector);
	cout << "===Кредитные карты===" << endl;
	printAccount(creditCardVector);
	cout << "===Интернет кошельки===" << endl;
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

void Wallet::addDebitCard(Debit_Card& card)
{
	debitCardVector.push_back(card);
}

void Wallet::addCreditCard(Credit_Card& card)
{
	creditCardVector.push_back(card);
}

void Wallet::addInternetWallet(Internet_Wallet& wallet)
{
	internetWalletVector.push_back(wallet);
}



