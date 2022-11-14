#include <iostream>
#include <vector>

using namespace std;

class A
{
	public:
		virtual void test(){
			cout << "A::test()" << endl;
		}

};

class B: public A
{
	public:
		void test()
		{
			cout << "B::test()" << endl;
		}

};

class C: public B
{
	public:
		void test()
		{
			cout << "C::test()" << endl;
		}


};

int main()
{
	vector<A*> arr;
	arr.push_back(new A);
	arr.push_back(new B);
	arr.push_back(new C);

	for(int i = 0; i < arr.size(); i++){
		arr[i] -> test();
	}

	return 0;

}
