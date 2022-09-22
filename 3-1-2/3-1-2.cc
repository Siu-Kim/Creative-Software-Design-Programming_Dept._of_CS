#include <iostream>
#include <cstring>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b;
	
	cin >> a >> b;
	a += b;
	cout << a << '\n' << a.front() << '\n' << a.back() << '\n';

}
