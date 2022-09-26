#include <iostream>

using namespace std;

int** magicSquare(int N);

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	
	if(N < 3) return 0;
	if(N % 2 == 0) return 0;
	
	int** arrNum = magicSquare(N);

	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << arrNum[i][j] << " ";
		}
		cout << '\n';
	}

	for(int i = 0; i < N; i++){
		delete[] arrNum[i];
	}
	delete[] arrNum;


	return 0;
}

int** magicSquare(int N){
	int** arrNum = new int*[N];

	for(int i = 0; i < N; i++){
		arrNum[i] = new int[N];
	}

	int column = N / 2, row = 0;

	for(int n = 1; n <= N*N; n++){
		arrNum[row][column] = n;
		
		if(n % N == 0){
		       	row++;
		}
		else{
			row = row - 1;
			column = column + 1;
			if(row == -1) row = N - 1;
			if(column == N) column = 0;
		}
	}

	return arrNum;
}

