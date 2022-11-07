#include "canvas.h"
#include <vector>
#include <iostream>

int main(void) {
	vector<Shape*> vs;
	string ans, shp;
	int x, y, w, h;
	size_t r, c;
	char brush;

	cin >> r >> c;
	Canvas cv(r, c);
	cv.Clear();
	cv.Print();

	while(1) {
        cin >> ans;
		if (ans == "add") {
			cin >> shp;
			if (shp == "rect") {
				cin >> x >> y >> w >> h >> brush;
				vs.push_back(new Rectangle(x, y, brush, w, h));
			}

			if (shp == "diamond") {
				cin >> x >> y >> h >> brush;
				vs.push_back(new Diamond(x, y, brush, h));
			}

			if (shp == "tri_up") {
				cin >> x >> y >> h >> brush;
				vs.push_back(new UpTriangle(x, y, brush, h));
			}

			if (shp == "tri_down") {
				cin >> x >> y >> h >> brush;
				vs.push_back(new DownTriangle(x, y, brush, h));
			}
		}

		if (ans == "delete") {
			cin >> x;
			if (x < vs.size()) {
				delete vs[x];
				vs.erase(vs.begin()+x);
			}
		}

		if (ans == "draw") {
			cv.Clear();
			for (int k=0; k<vs.size(); k++) vs[k]->Draw(&cv);
			cv.Print();
		}
		
		if (ans == "dump") {
			for (int k=0; k<vs.size(); k++) {
				cout << k << " ";
				vs[k]->Print();
			}
		}

		if (ans == "resize") {
			cin >> r >> c;
			cv.Resize(r, c);
		}

		if (ans == "quit") break;
	}

	while(vs.size()) {
		delete vs[0];
		vs.erase(vs.begin());
	}

	return 0;
}
