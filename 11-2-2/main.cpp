#include "my_vector2.h"
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main()
{
	string ans;
	int len = 0;

	while (1) {
		if (ans != "new") cin >> ans;
		if (ans == "new") {
			cin >> len;
			MyVector2 a(len);
			MyVector2 b(len);

			cout << "enter a" << endl;
			cin >> a;
			cout << "enter b" << endl;
			cin >> b;

			while (1) {
				cin >> ans;
				if (ans == "a") {
					cin >> ans;
					if (ans == "+") {
						cin >> ans;
						if (ans == "a") {
							MyVector2 c(a+a);
							cout << c << endl;
						}
						if (ans == "b") {
							MyVector2 c(a+b);
							cout << c << endl;
						}
						if (atoi(ans.c_str()) != 0 || ans=="0") {
							MyVector2 c(a+atoi(ans.c_str()));
							cout << c << endl;
						}
					}
					if (ans == "-") {
						cin >> ans;
						if (ans == "a") {
							MyVector2 c(a-a);
							cout << c << endl;
						}
						if (ans == "b") {
							MyVector2 c(a-b);
							cout << c << endl;
						}
						if (atoi(ans.c_str()) != 0 || ans=="0") {
							MyVector2 c(a-atoi(ans.c_str()));
							cout << c << endl;
						}
					}
				}

				else if (ans == "b") {
					cin >> ans;
					if (ans == "+") {
						cin >> ans;
						if (ans == "a") {
							MyVector2 c(b+a);
							cout << c << endl;
						}
						if (ans == "b") {
							MyVector2 c(b+b);
							cout << c << endl;
						}
						if (atoi(ans.c_str()) != 0 || ans=="0") {
							MyVector2 c(b+atoi(ans.c_str()));
							cout << c << endl;
						}
					}
					if (ans == "-") {
						cin >> ans;
						if (ans == "a") {
							MyVector2 c(b-a);
							cout << c << endl;
						}
						if (ans == "b") {
							MyVector2 c(b-b);
							cout << c << endl;
						}
						if (atoi(ans.c_str()) != 0 || ans=="0") {
							MyVector2 c(b-atoi(ans.c_str()));
							cout << c << endl;
						}
					}
				}
				
				else if (ans == "quit" || ans == "new") break;
			}
		}

		if (ans == "quit") break;
	}
	
	return 0;
}