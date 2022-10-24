#include "number.h"
#include <iostream>

using namespace std;

int main(void){
	string s;
	int n;

	while(true) {
		cin >> s;

		if(s == "quit") break;
		if(s == "number"){
			cin >> n;
			Number num;
			num.setNumber(n);
			cout << "getNumber(): " << num.getNumber() << endl;
		}
		if(s == "square"){
			cin >> n;
			Square squ;
			squ.setNumber(n);
			cout << "getNumber(): " << squ.getNumber() << endl;
			cout << "getSquare(): " << squ.getSquare() << endl;
		}
		if(s == "cube") {
			cin >> n;
			Cube cub;
			cub.setNumber(n);
			cout << "getNumber(): " << cub.getNumber() << endl;
			cout << "getSquare(): " << cub.getSquare() << endl;
			cout << "getCube(): " << cub.getCube() << endl;
		}	
	}

	return 0;
}
