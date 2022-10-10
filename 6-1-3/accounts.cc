#include "accounts.h"
#include <iostream>

using namespace std;

void AccountManager::depositing(int _ID, int _amount){
	int diff = 0;
	accounts[_ID].balance += _amount;
	if(accounts[_ID].balance > 1000000) {
		diff = accounts[_ID].balance - 1000000;
		accounts[_ID].balance = 1000000;
	
	}
	cout << "Success: Deposit to user " << _ID << " " << _amount-diff << endl;

}

void AccountManager::withdrawing(int _ID, int _amount){
	if(accounts[_ID].balance < _amount) cout << "Failure: Withdraw from user " << _ID << " " << _amount << endl;
	else{
		accounts[_ID].balance -= _amount;
		cout << "Success: Withdraw from user " << _ID << " " << _amount << endl;

	}	

}

void AccountManager::transferring(int _ID1, int _ID2, int _amount) {
	int diff = 0;
	if (accounts[_ID1].balance < _amount) cout << "Failure: Transfer from user " << _ID1 << " to user " << _ID2 << " " << _amount << endl;
	else{
		accounts[_ID1].balance -= _amount;
		accounts[_ID2].balance += _amount;
		if(accounts[_ID2].balance > 1000000) {
			diff = accounts[_ID2].balance - 1000000;
			accounts[_ID2].balance = 1000000;
			accounts[_ID1].balance += diff;
		}
		cout << "Success: Transfer from user " << _ID1 << " to user " << _ID2 << " " << _amount - diff << endl;

	}
}

void AccountManager::checking_balances(int _ID){
	cout << "Balance of user " << _ID << ": " << accounts[_ID].balance << endl;

}
