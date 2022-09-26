#include <iostream>
#include <string>
using namespace std;


struct Person{
	char name[100];
	int age;

};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	struct Person p[n];	
	
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> p[i].name >> p[i].age;
	}
	
	for(int i = 0; i < n; i++){
		cout << "Name:" << p[i].name << ", Age:" << p[i].age << '\n';
	
	}

	return 0;
}
