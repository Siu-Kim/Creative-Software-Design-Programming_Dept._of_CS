#include <iostream>

using namespace std;

void getSumDiff(int a, int b, int& sum, int& diff);

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, sum = 0, diff = 0;
	cin >> a >> b;
	
	getSumDiff(a, b, sum, diff);

	cout << "sum:"<< sum << '\n' << "diff:" << diff << '\n'; 

	return 0;
}

void getSumDiff(int a, int b, int& sum, int& diff){
	sum = a + b;
	diff = a - b;

}
