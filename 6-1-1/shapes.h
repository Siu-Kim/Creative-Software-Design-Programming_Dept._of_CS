#include <iostream>

using namespace std;

#define pi 3.14 // pi를 3.14로 정의 

class Circle
{
	public:
		int x_c, y_c, r_c;	// member varieables: 원의 중심의 x,y 좌표, x_c와 y_c,  반지름 r_c
	
		double calculating_area(); // member function: 원의 넓이를 계산하는 함수 calculating_area() -> shapes.cc 
		double calculating_perimeter(); // member function: 원의 둘레를 계산하는 함수 calculating_perimeter() -> shapes.cc

};

class Rectangle
{
	public:
		int x_tl, y_tl, x_br, y_br; // member variables: 직사각형의 왼쪽 위, 오른쪽 아래 모서리의 x, y 좌표
	
		int calculating_area(); // member function: 직사각형의 넓이를 계산하는 함수 calculating_area() -> shapes.cc
		int calculating_perimeter(); // member function: 직사각형의 둘레를 계산하는 함수 calculating_perimeter() -> shapes.cc


};
