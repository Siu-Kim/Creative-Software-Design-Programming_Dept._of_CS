#include <iostream>
#include <vector>
#include <string>

using namespace std;

class A{
	public:
		A(int a){
			memberA = new int;
			*memberA = a;
			cout << "new memberA" << endl;
		}
		virtual ~A(){
			delete memberA;
			cout << "delete memberA" << endl;
		}

		virtual void print(){
			cout << "*memberA " << *memberA << endl;
		}

	private:
		int* memberA;
};

class B:public A{
	public:
		B(double b) : A(1) {
			memberB = new double;
			*memberB = b;
			cout << "new memberB" << endl;
		}
		~B() {
			delete memberB;
			cout << "delete memberB" << endl;
		}
		void print(){
			A::print();
			cout << "*memberB" << *memberB << endl;
		}

	private:
		double* memberB;

};

class C: public B{
	public:
		C(const string& c) : B(1.1){
			memberC = new string;
			*memberC = c;
			cout << "new memberC" << endl;
		}
		~C() {
			delete memberC;
			cout << "delete memberC" << endl;
		}

		void print() {
			B::print();
			cout << "*memberC " << *memberC << endl;
		}

	private:
		string* memberC;
};

int main(){
	int d;
	double r;
	string s;

	cin >> d >> r >> s;

	A* a = new A(d);
	B* b = new B(r);
	C* c = new C(s);

	vector<A*> arr;
      	arr.push_back(a);
	arr.push_back(b);
 	arr.push_back(c);	


	for(vector<A*>::iterator it = arr.begin(); it != arr.end(); it++){
		(*it) -> print();
	}

	delete a;
	delete b;
	delete c;
	
	return 0;
}
