#include <iostream>
#include "accounts.h"

using namespace std;


int main(void){
	char command = 0;
	int account_num, account_num1, account_num2;
	int amount;

	AccountManager am;

	while(command != 'Q'){
		cout << endl << "JOB?" << endl;
		cin >> command;
		if(command == 'N'){
			if(am.number < 10){
				am.accounts[am.number].account_ID = am.number;
				am.accounts[am.number].balance = 0;
				cout << "Account for user" << am.number << " registered" << endl;
			      	am.checking_balances(am.number);
		       		am.number += 1;       
			}
			else cout << "You can't make account anymore" << endl;
		}
		if(command == 'D'){
			cin >> account_num >> amount;
			if(am.number > account_num) {
				am.depositing(account_num, amount);
				am.checking_balances(account_num);
			}
			else cout << "Account does not exist" << endl;
		}
		if(command == 'W') {
			cin >> account_num >> amount;
			if(am.number > account_num){	
				am.withdrawing(account_num, amount);
				am.checking_balances(account_num);
			}
			else cout << "Account does not exist" << endl;
		}
		if(command == 'T'){
			cin >> account_num1 >> account_num2 >> amount;
			if(am.number > account_num1 && am.number > account_num2){
				am.transferring(account_num1, account_num2, amount);
				if(account_num1 > account_num2){
					am.checking_balances(account_num2);
					am.checking_balances(account_num1);
				}
				else{
					am.checking_balances(account_num1);
					am.checking_balances(account_num2);
			
				}
			}
			else cout << "Account does not exist" << endl;
		}
		if(command != 'Q') cout << endl;
	}
	return 0;
}
