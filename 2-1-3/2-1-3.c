#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc){
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = tmp;

	printf("%d:%d:%d\n", *pa, *pb, *pc);


}


void rotateRight(int* pa, int* pb, int* pc){
	int tmp;
	tmp = *pc;
	*pc = *pb;
	*pb = *pa;
	*pa = tmp;

	printf("%d:%d:%d\n", *pa, *pb, *pc);

}



int main(void){
	int a = 10, b = 20, c = 30;
	int x;
	printf("%d:%d:%d\n", a, b, c);

	scanf("%d", &x);

	while(x != 3){
		if(x == 1){
			rotateLeft(&a, &b, &c);		
		}
		else if(x == 2){
			rotateRight(&a, &b, &c);
		}
		else{
			break;
		}
		scanf("%d", &x);	
	}
	return 0;
}
