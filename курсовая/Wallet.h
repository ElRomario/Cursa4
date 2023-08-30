#pragma once

#include "Credit_Card.h"
#include "Internet_Wallet.h"
#include "Debit_Card.h"
#include <iostream>
#include <vector>

using namespace std;
class Wallet
{
private:
		vector<Debit_Card> debitCardVector;
		vector<Credit_Card> creditCardVector;
		vector<Internet_Wallet> internetWalletVector;
		friend class Debit_Card;
		friend class Internet_Waallet;
		friend class Credit_Card;
public:
	void printAllAccounts();
	Wallet();
	Wallet(Debit_Card& card);
	Wallet(Credit_Card& card);
	Wallet(Internet_Wallet& card);

	void addDebitCard(Debit_Card& card);
	void addCreditCard(Credit_Card& card);
	void addInternetWallet(Internet_Wallet& wallet);



	~Wallet() {};
		
};

