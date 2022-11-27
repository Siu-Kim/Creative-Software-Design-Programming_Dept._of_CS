#include "my_string.h"

using namespace std;

char _a, _operator, _b;

int main(){
    string mystring_;

    while(true){
        cin >> mystring_;

        if(mystring_ == "new"){
            
            MyString* a = new MyString;
            cout << "enter a" << endl;
            cin >> *a;

            MyString* b = new MyString;
            cout << "enter b" << endl;
            cin >> *b;

        }
        if(mystring_ == "quit"){
            return 0;
        }
        else{
            int i = 0;
            while(putchar(mystring_[i]) != '\n'){
                if()
            }
            _a = putchar(mystring_[0])
            
        }



    }






    return 0;
}
