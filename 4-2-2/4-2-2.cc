#include <iostream>

using namespace std;

void bubble_sort(int* arr, int N);

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	if(n <= 0) return 0;

	int* numArr = new int[n];

	for(int i = 0; i < n; i++){
		cin >> numArr[i];
	}
	
	bubble_sort(numArr, n);

	for(int i = 0; i < n; i++){
		cout << numArr[i] << " ";
	}

	return 0;
}

void bubble_sort(int* arr, int N){
	int tmp;
	for(int i = 0; i < N-1; i++){
		for(int j = 1; j < N; j++){
			if(arr[j-1] > arr[j]){
				tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;		
			}
		}
	
	}

}
