#include <iostream>
#include <cstring>

using namespace std;

void add(int a, int b);
void add_1(string aa, string bb);

int main(){
	int a, b;
	string aa, bb ;
	cin >> a >> b >> aa >> bb;
	add(a,b);
	add_1(aa, bb);
      	
	
	
	
}

void add(int a, int b){
	cout << a + b << '\n';
}

void add_1(string aa, string bb){


	cout << aa + '-' + bb << '\n';
}
