#include "shape.h"
 using namespace std;

Shape::Shape(double width, double height){
    _width = width;
    _height = height;

}

Triangle::Triangle(double width, double height): Shape(width, height) {};


Rectangle::Rectangle(double width, double height): Shape(width, height) {};


double Triangle::getArea(){
    return (_width * _height) / 2;
}

double Rectangle::getArea(){
    return _width * _height;
}
