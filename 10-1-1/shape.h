#pragma once

#include <iostream>
#include <vector>

class Shape
{
    public:
        Shape(double width, double height);

        virtual double getArea() = 0;

    protected:
        double _width;
        double _height;

};

class Triangle: public Shape
{
    public: 
        Triangle(double width, double height);

        virtual double getArea();

};

class Rectangle: public Shape
{
    public:
        Rectangle(double width, double height);

        virtual double getArea();

};