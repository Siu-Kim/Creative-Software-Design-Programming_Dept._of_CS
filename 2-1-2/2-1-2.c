#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;

}Point;

Point getScale2xPoint(const Point* p){
	Point p2;
	printf("Calling getScale2xPoint()\n");

	p2.xpos = p->xpos * 2;
	p2.ypos = p->ypos * 2;
	
	printf("P1 : %d %d\n", p->xpos, p->ypos);
	printf("P2 : %d %d\n", p2.xpos, p2.ypos);

	return p2;
}

void swapPoints(Point* p1, Point* p2){
	printf("Calling swapPoint()\n");
	
	int a, b;
	a = p1->xpos;
	b = p1->ypos;
	
	p1->xpos = p2->xpos;
	p1->ypos = p2->ypos;
	p2->xpos = a;
	p2->ypos = b;

	printf("P1 : %d %d\n", p1->xpos, p1->ypos);
	printf("P2 : %d %d\n", p2->xpos, p2->ypos);
}



int main(void){
	Point p1;
	
	scanf("%d %d", &p1.xpos, &p1.ypos);

	Point p2 = getScale2xPoint(&p1);
	swapPoints(&p1, &p2);

	return 0;
}
