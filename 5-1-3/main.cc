#include <iostream>
#include "minmax.h"

using namespace std;

int main(int argc, char** argv){
	int* arr = new int[argc-1];

	for(int i = 1; i < argc; i++){
		arr[i] = atoi(argv[i]);
	}

	int a = 0, b = 0;
	int& max = a;
	int& min = b;

	getMinMax(arr, argc, max, min);

	cout << "min: " << min << '\n' << "max: " << max << '\n';

	delete[] arr;
	
	return 0;
}
