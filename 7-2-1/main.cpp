#include "message.h"

using namespace std;

int main(){
	MessageBook SMS;

	int phone_num;
	string message_;
	string ans;

	while(ans != "quit"){
		cin >> ans;

		if(ans == "add"){
			cin >> phone_num;
			cin.ignore();
			getline(cin, message_);

			SMS.AddMessage(phone_num, message_);

		}
		else if(ans == "delete"){
			cin >> phone_num;
			SMS.DeleteMessage(phone_num);
		}
		else if(ans == "print"){
			cin >> phone_num;
			SMS.GetMessage(phone_num);
		}
		else if(ans == "list"){
			SMS.GetNumbers();
		}
		else if(ans == "quit") return 0;
	
	
	}

	return 0;

}
