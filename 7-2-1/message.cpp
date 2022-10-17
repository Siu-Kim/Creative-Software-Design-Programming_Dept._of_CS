#include "message.h"


MessageBook::MessageBook(){
	messages_ = messages_;
}

MessageBook::~MessageBook(){
	messages_.clear();
	cout << messages_.empty() << endl;
}

void MessageBook::AddMessage(int number, const string& message){
	messages_.insert(make_pair(number, message));
	cout << messages_[number] << endl;
}

void MessageBook::DeleteMessage(int number){
	messages_.erase(number);
}

vector<int> MessageBook::GetNumbers(){
	for(auto iter = messages_.begin(); iter != messages_.end(); iter++){
		cout << iter->first << ": " << iter->second << endl;
	}
}

const string& MessageBook::GetMessage(int number){
	cout << number << ": " << messages_[number] << endl;

}
