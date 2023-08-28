#pragma once
#include <vector>
#include "Credit_Card.h"
#include "Internet_Wallet.h"
#include "Debit_Card.h"
#include <iostream>
using namespace std;
class Wallet
{
private:
		vector<Debit_Card> debitCardVector;
		vector<Credit_Card> creditCardVector;
		vector<Internet_Wallet> internetWalletVector;
public:
	void printAllAccounts();
	Wallet();
	Wallet(Debit_Card& card);
	Wallet(Credit_Card& card);
	Wallet(Internet_Wallet& card);
		
};

