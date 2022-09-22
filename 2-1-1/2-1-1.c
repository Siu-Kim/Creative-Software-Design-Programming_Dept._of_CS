#include <stdio.h>


struct Person{
	char name[11];
	int age;
};


int main(){
	struct Person p[3];
	for(int i = 0; i < 3; i++){
		scanf("%s %d", p[i].name, &p[i].age);
	
	}
	
	for(int i = 0; i < 3; i++){
		printf("Name:%s, Age:%d \n", p[i].name, p[i].age);
	}

	return 0;
}
