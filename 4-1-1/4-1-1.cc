#include <iostream>


using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int* numArr = new int[n];

	for(int i = 0; i < n; i++){
		numArr[i] = i;
	}
	
	for(int i = 0; i < n; i++){
		cout << numArr[i] << " ";
	}

	delete[] numArr;


	return 0;
}
