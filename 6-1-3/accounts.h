class Account{
	public:
		int account_ID;
		int balance;
};

class  AccountManager{
	public:
		Account accounts[10];
		int number = 0;
		void depositing(int _ID, int _amount);
		void withdrawing(int _ID, int _amount);
		void transferring(int _ID1,int _ID2, int _amount);
		void checking_balances(int _ID);
	
};
