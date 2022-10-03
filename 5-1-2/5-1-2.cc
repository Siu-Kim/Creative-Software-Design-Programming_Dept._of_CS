#include <iostream>
#include <string>

using namespace std;


typedef struct{
	string name;
	double score;
}Person;


int main(int argc, char** argv){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int j = 0;
	Person* p = new Person[argc/2];
	

	for(int i = 1; i < argc; i+=2){
		p[j].name = argv[i];
		p[j].score = atof(argv[i+1]);
		j++;
	
	}
	
	for(int i = 0; i < argc/2; i++){
		cout << "Name:" << p[i].name << ", Score:" << p[i].score << '\n';
	}

	delete[] p;

	return 0;
}
