#include <iostream>
#include <string>
#include <vector>

using namespace std;
class A{
	public:
		virtual string getTypeInfo(){
			return "This is an instance of class A.";
		}
		
};

class B: public A{
	public:
		string getTypeInfo(){
			return "This is an instance of class B.";
		}

};

class C: public B{
	public:
		string getTypeInfo(){
			return "This is an instance of class C.";
		}
	
};

void printObjectTypeInfo1(A* object){
	cout << object -> getTypeInfo() << endl;
}

void printObjectTypeInfo2(A& object){
	cout << object.getTypeInfo() << endl;
}


int main(){
	vector<A*> arr;
	arr.push_back(new A);
	arr.push_back(new B);
	arr.push_back(new C);

	for(vector<A*>::iterator it = arr.begin(); it != arr.end(); it++){
		A& temp = (**it);
		printObjectTypeInfo1(*it);
		printObjectTypeInfo2(temp);
	}

	for(int i = 0; i < arr.size(); i++){
		delete arr[i];
	}

	return 0;
	
}
