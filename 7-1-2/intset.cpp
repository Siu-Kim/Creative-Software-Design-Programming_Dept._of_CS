#include "intset.h"

IntegerSet::IntegerSet()
{
	numbers_ = numbers_;
}

IntegerSet::~IntegerSet(){
	numbers_.clear();
}

void IntegerSet::AddNumber(int num){
	auto iter = numbers_.begin();
	while(iter != numbers_.end()){
		if(num != *iter) iter++;
		else return;
	}
	numbers_.push_back(num);

}

void IntegerSet::DeleteNumber(int num){
	auto iter = find(numbers_.begin(), numbers_.end(), num);
	if(iter == numbers_.end()) return;
	numbers_.erase(iter);
}

int IntegerSet::GetItem(int pos){
	int total_idx = numbers_.end() - numbers_.begin();
	if(pos >= total_idx) return -1;
	else return numbers_[pos];
}

vector<int> IntegerSet::GetAll(){
	sort(numbers_.begin(), numbers_.end());
	return numbers_;
}
