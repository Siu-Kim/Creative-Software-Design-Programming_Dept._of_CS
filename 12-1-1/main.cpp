#include <iostream>
#include <string>

using namespace std;

template <typename T>
void myswap(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;

    cout << "After calling myswap(): " << a << " " << b << endl;
}

int main(){
    int a_int, b_int;
    float a_real, b_real;
    string a_str, b_str;

    cin >> a_int >> b_int;
    myswap(a_int, b_int);

    cin >> a_real >> b_real;
    myswap(a_real, b_real);

    cin >> a_str >> b_str;
    myswap(a_str, b_str);

    return 0;
}