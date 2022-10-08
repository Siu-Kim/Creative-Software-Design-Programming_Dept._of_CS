#include "shapes.h"

using namespace std;

double Circle::calculating_area()
{
	return r_c * r_c * pi;

}

double Circle::calculating_perimeter()
{
	return 2 * r_c * pi;

}

int Rectangle::calculating_area()
{
	int Length, Width;
	
	Length = y_tl - y_br;
	Width = x_br - x_tl;

	return Length * Width; 
}

int Rectangle::calculating_perimeter()
{
	int Length, Width;
		
	Length = y_tl - y_br;
	Width = x_br - x_tl;

	return 2 * (Length + Width);
}
