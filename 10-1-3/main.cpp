#include <iostream>
#include <vector>

using namespace std;
class B
{
    public:
        virtual ~B() {}

};

class C : public B
{
    public:
        void test_C() {cout << "C::test_C()" << endl;}
};

class D : public B
{
    public:
        void test_D() {cout << "D::test_D()" << endl;}
};

int main(){
    char type_class;
    
    vector<B*> arr;

    char arr_class;

    while(true){
        cin >> arr_class;

        if(arr_class == '0'){
            for(int i = 0; i < arr.size(); i++){
                if(dynamic_cast<D*>(arr[i]) != 0){
                    dynamic_cast<D*>(arr[i]) -> test_D();
                }
                else if(dynamic_cast<C*>(arr[i]) != 0){
                    dynamic_cast<C*>(arr[i]) -> test_C();
                }
            }
		
	    for(int i = 0; i < arr.size(); i++){
	    	delete arr[i];
	    }

            return 0;
        }
        
        if(arr_class == 'B'){
            arr.push_back(new B);
        }
        else if(arr_class == 'C'){
            arr.push_back(new C);
        }
        else if(arr_class == 'D'){
            arr.push_back(new D);
        }
    }

    

}
