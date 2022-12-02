#include <iostream>

using namespace std;

class A
{

};
class B : public A
{
};
class C : public B
{
};
  
int main(){
	int n;
	cout << "input num(0~2):";
	cin >> n;	
	
	try{
		if(n == 0)
			throw A();
		else if(n == 1)	
			throw B();
		else if (n ==2)
			throw C();
		else
			throw string("invalid input");
	}
    catch(C err_c){
        cout << "throw C has been called" << endl;
    }
    catch(B err_b){
        cout << "throw B has been called" << endl;
    }
    catch(A err_a){
        cout << "throw A has been called" << endl;
    }
    catch(string invalid_str){
        cout << invalid_str << endl;
    }
	

	return 0;
}
