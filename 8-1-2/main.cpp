#include "rect.h"

#include <iostream>

using namespace std;

int main(void) {
	string ans;
	int width, height;

	while(true){
		cin >> ans;

		if(ans == "quit") return 0;
		if(ans == "nonsquare"){
			cin >> width >> height;
		
			NonSquare ns(width, height);
			ns.print();
		}
		else if(ans == "square"){
			cin >> width;

			Square sq(width);
			sq.print();
		}
	
	}

	return 0;
}
