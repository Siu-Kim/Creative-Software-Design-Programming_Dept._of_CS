#include "sorted.h"


using namespace std;

int main(){
	SortedArray sort_;

	string ans;

	while(ans != "quit"){
		cin >> ans;

		if(ans == "ascend"){
			vector<int> sorted_arr = sort_.GetSortedAscending();
			for(auto iter = sorted_arr.begin(); iter != sorted_arr.end(); iter++){
				cout << *iter << " ";
			}
			cout << endl;
		}

		else if(ans == "descend"){
			vector<int> _sorted_arr = sort_.GetSortedDescending();
			for(auto iter = _sorted_arr.begin(); iter != _sorted_arr.end(); iter++){
				cout << *iter << " ";
			}
			cout << endl;
		}

		else if(ans == "max"){
			cout << sort_.GetMax() << endl;
		}

		else if(ans == "min"){
			cout << sort_.GetMin() << endl;
		}

		else if(ans == "quit") return 0;
		else{
			int num = stoi(ans);
			sort_.AddNumber(num);	
		}
	
	}
	return 0;
}
