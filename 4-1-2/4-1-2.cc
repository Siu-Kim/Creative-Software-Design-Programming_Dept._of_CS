#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, tmp;
	cin >> N;

	int* numArr = new int[N];

	for(int i = 0; i < N; i++){
		cin >> numArr[i];
	
	}

	for(int i = 0; i < N-1; i++){
		for(int j = 1; j < N; j++)
			if(numArr[j-1] <= numArr[j]){
				tmp = numArr[j-1];
				numArr[j-1] = numArr[j];
				numArr[j] = tmp;
		}
	
	}	
	
	cout << "min: " << numArr[N-1] << '\n' << "max: " << numArr[0] << '\n';

	delete[] numArr;


	return 0;
}
