#include "Wallet.h"



template <typename T>
void printAccount(vector<T>& acc)
{
	if (acc.size() == 0) cout << "       ПУСТО   "<<endl;
	else
	{
		for (int i = 0; i < acc.size(); i++)
		{
			acc[i].printCardStatus();
		}
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

vector<Debit_Card>& Wallet::getDebitCardVector()
{
	return debitCardVector;
}

vector<Credit_Card>& Wallet::getCreditCardVector()
{
	return creditCardVector;
}

vector<Internet_Wallet>& Wallet::getInternetWalletVector()
{
	return internetWalletVector;
}

void Wallet::addDebitCard(Debit_Card card)
{
	debitCardVector.push_back(card);
	
}

void Wallet::addCreditCard(Credit_Card card)
{
	creditCardVector.push_back(card);
	
}

void Wallet::addInternetWallet(Internet_Wallet wallet)
{
	internetWalletVector.push_back(wallet);
	
}

void Wallet::addExpenseToDebitCard(Expense& expense, int accId)
{
	this->addExpense(debitCardVector, expense, accId);
}

void Wallet::addExpenseToCreditCard(Expense& expense, int accId)
{
	this->addExpense(creditCardVector, expense, accId);
}

void Wallet::addExpenseToInternetWallet(Expense& expense, int accId)
{
	this->addExpense(internetWalletVector, expense, accId);
}

void Wallet::creditCardOperations(int ID)
{

}

void Wallet::debitCardOperations(int ID)
{

}

void Wallet::internetWalletOperations(int ID)
{

}

void Wallet::printDebitCardExpences()
{
	cout << endl << "===Расходы на дебитовых картах===" << endl;
	for (int i = 0; i < debitCardVector.size(); i++)
	{
		if (debitCardVector[i].Expenses.size() == 0)
		{
			cout << "       ПУСТО   " << endl; break;
		}
		else
		{
			this->printExpences(debitCardVector); break;
			cout << "===============================" << endl;
		}
	}
}

void Wallet::printCreditCardExpences()
{
	for (int i = 0; i < creditCardVector.size(); i++)
	{
		cout << endl << "===Расходы на кридтных картах===" << endl;
		if (creditCardVector[i].Expenses.size() == 0)
		{
			cout << "       ПУСТО   " << endl; break;
		}
		else
		{
			this->printExpences(creditCardVector); break;
			cout << "===============================" << endl;
		}
	}
}

void Wallet::printInternetWalletExpences()
{
	cout << endl << "===Расходы на интернет кошельках===" << endl;
	for (int i = 0; i <internetWalletVector.size(); i++)
	{
		if (internetWalletVector[i].Expenses.size() == 0)
		{
			cout << "       ПУСТО   " << endl; break;
		}
		else
		{
			this->printExpences(internetWalletVector); break;
			cout << "===============================" << endl;
		}
	}
}

template<typename T>
inline void Wallet::addExpense(vector<T>& inputVector,  Expense& transaction, int accId)
{
	inputVector[accId-1].Expenses.push_back(transaction);
}

template<typename T>
void Wallet::printVector(vector<T>& inputVector)
{
	for (int i = 0; i < inputVector.size(); i++)
	{
		inputVector[i].printCardStatus();
	}
}

template<typename T>
void Wallet::printExpences(vector<T>& inputVector)
{
	for (int i = 0; i < inputVector.size(); i++)
	{
		for (int j = 0; j < inputVector[i].Expenses.size(); j++)
		{
			inputVector[i].Expenses[j].printExpense();
		}
	}
}



