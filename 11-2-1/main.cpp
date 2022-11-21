#include "my_vector.h"
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main()
{
	string ans;
	int len;
    MyVector a, b, c;

	while (1) {
		cin >> ans;
		if (ans == "new") {
			cin >> len;
			MyVector d(len);
			a=d;
			b=d;
			c=d;

			cout << "enter a" << endl;
			cin >> a;
			cout << "enter b" << endl;
			cin >> b;
		}

		else if (ans == "a") {
			cin >> ans;
			if (ans == "+") {
				cin >> ans;
				if (ans == "a") {
					c = a+a;
					cout << c << endl;
				}
				if (ans == "b") {
					c = a+b;
					cout << c << endl;
				}
				if (atoi(ans.c_str()) != 0 || ans=="0") {
					c = a+atoi(ans.c_str());
					cout << c << endl;
				}
			}
			if (ans == "-") {
				cin >> ans;
				if (ans == "a") {
					c = a-a;
					cout << c << endl;
				}
				if (ans == "b") {
					c = a-b;
					cout << c << endl;
				}
				if (atoi(ans.c_str()) != 0 || ans=="0") {
					c = a-atoi(ans.c_str());
					cout << c << endl;
				}
			}
		}

		else if (ans == "b") {
			cin >> ans;
			if (ans == "+") {
				cin >> ans;
				if (ans == "a") {
					c = b+a;
					cout << c << endl;
				}
				if (ans == "b") {
					c = b+b;
					cout << c << endl;
				}
				if (atoi(ans.c_str()) != 0 || ans=="0") {
					c = b+atoi(ans.c_str());
					cout << c << endl;
				}
			}
			if (ans == "-") {
				cin >> ans;
				if (ans == "a") {
					c = b-a;
					cout << c << endl;
				}
				if (ans == "b") {
					c = b-b;
					cout << c << endl;
				}
				if (atoi(ans.c_str()) != 0 || ans=="0") {
					c = b-atoi(ans.c_str());
					cout << c << endl;
				}
			}
		}
		
		else if (ans == "quit") break;
	}
	
	return 0;
}