#include <iostream>
#include "shapes.h"

using namespace std;


//Input: C(create a circle by using x coordinate of center, y coordinate of center, radius), R(create rectangle by using x and y coordinate of top left corner, bottom right corner) Q(quit the program)
//Output is the area and perimeter of the shape

int main(){
	ios_base::sync_with_stdio(false);

	char ans;

	cout << '\n';

	while(ans != 'Q'){
	
		cout << "\nshapes?" << '\n';
		
		cin >> ans;

		if(ans == 'C'){
			Circle cir;
			int x, y, r;

			cin >> x >> y >> r;
			cir.x_c = x;
			cir.y_c = y;
			cir.r_c = r;
			
			cout << "area: " << cir.calculating_area();
			cout << ", perimeter: " << cir.calculating_perimeter() << '\n';
			
		}
		else if(ans == 'R'){
			Rectangle rec;
			int tx, ty, bx, by;

			cin >> tx >> ty >> bx >> by;
			rec.x_tl = tx;
			rec.y_tl = ty;
			rec.x_br = bx;
			rec.y_br = by;

			cout << "area: " << rec.calculating_area();
			cout << ", perimeter: " << rec.calculating_perimeter() << '\n';
		
		}
	}
	
	return 0;
}
