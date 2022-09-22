#include <iostream>
#include <cstring>
using namespace std;

void swapint(int& n1, int& n2);
void swapString(string& s1, string& s2);


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n1, n2;
	cin >> n1 >> n2;
	
	string s1, s2;
	cin >> s1 >> s2;

	cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 << '\n';
	
	swapint(n1, n2);
	swapString(s1, s2);
	
	cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 << '\n';

}

void swapint(int& n1, int& n2){
	int tmp1;
	tmp1 = n1;
	n1 = n2;
	n2 = tmp1;
	
}

void swapString(string& s1, string& s2){
	string tmp2;
	tmp2 =s1;
	s1 =s2;
	s2 =tmp2;
}
