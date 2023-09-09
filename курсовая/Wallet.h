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
		friend class Internet_Wallet;
		friend class Credit_Card;
public:
	void printAllAccounts();
	Wallet();
	Wallet(Debit_Card& card);
	Wallet(Credit_Card& card);
	Wallet(Internet_Wallet& card);

	vector<Debit_Card>& getDebitCardVector();
	vector<Credit_Card>& getCreditCardVector();
	vector<Internet_Wallet>& getInternetWalletVector();

	void addDebitCard(Debit_Card card);
	void addCreditCard(Credit_Card card);
	void addInternetWallet(Internet_Wallet wallet);

	void addExpenseToDebitCard(Expense& expense, int id);
	void addExpenseToCreditCard(Expense& expense, int id);
	void addExpenseToInternetWallet(Expense& expense, int id);

	template <typename T>
	void printExpences(vector<T>& inputVector);
	template <typename T>
	void addExpense(vector<T>& inputVector, Expense& transaction, int id);
	template <typename T>
	void printVector(vector<T>& inputVector);

	void creditCardOperations(int ID);
	void debitCardOperations(int ID);
	void internetWalletOperations(int ID);

	void printDebitCardExpences();
	void printCreditCardExpences();
	void printInternetWalletExpences();




	~Wallet() {};
		
};

