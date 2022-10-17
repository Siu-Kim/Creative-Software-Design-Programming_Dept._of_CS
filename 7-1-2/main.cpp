#include "intset.h"

using namespace std;

int main(){
	IntegerSet set;

	string ans;
	
	while(ans != "quit"){

		cin >> ans;

		if(ans == "add"){
			int num_;
			cin >> num_;

			set.AddNumber(num_);
			vector<int> set_ = set.GetAll();

			for(auto iter = set_.begin(); iter != set_.end(); iter++){
				cout << *iter << " ";
			}
			cout << endl;
		
		}

		else if(ans == "del"){
			int num_;
			cin >> num_;

			set.DeleteNumber(num_);
			vector<int> set_ = set.GetAll();

			for(auto iter = set_.begin(); iter != set_.end(); iter ++){
				cout << *iter << " ";
			}
			cout << endl;
		
		}

		else if(ans == "get"){
			int num_idx;
			cin >> num_idx;

			int element = set.GetItem(num_idx);
			cout << element << endl;
		
		}
		else if(ans == "quit") return 0;
	}

	return 0;
}
