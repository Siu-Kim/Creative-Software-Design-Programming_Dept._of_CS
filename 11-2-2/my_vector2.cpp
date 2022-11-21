#include "my_vector2.h"

MyVector2::MyVector2() { a = new double[0]; }

MyVector2::MyVector2(int length) { 
    this->length=length; 
    this->a = new double[this->length];
}

MyVector2::MyVector2(const MyVector2& mv) {
    a = new double[mv.length];
    length = mv.length;
    for (int i=0; i<length; i++) a[i] = mv.a[i];
}

MyVector2::~MyVector2() {
    delete a;
}

MyVector2 MyVector2::operator+(const MyVector2& b) {
    MyVector2 temp(length);
    for (int i=0; i<length; i++) temp.a[i] = this->a[i]+b.a[i];
    return temp;
}

MyVector2 MyVector2::operator-(const MyVector2& b) {
    MyVector2 temp(length);
    for (int i=0; i<length; i++) temp.a[i] = this->a[i]-b.a[i];
    return temp;
}

MyVector2 MyVector2::operator+(const int b) {
    MyVector2 temp(length);
    for (int i=0; i<length; i++) temp.a[i] = this->a[i]+b;
    return temp;
}

MyVector2 MyVector2::operator-(const int b) {
    MyVector2 temp(length);
    for (int i=0; i<length; i++) temp.a[i] = this->a[i]-b;
    return temp;
}

std::ostream& operator<< (std::ostream& out, MyVector2& b) {
    for (int i=0; i<b.length; i++) out << b.a[i] << " ";
    return out;
}

std::istream& operator>> (std::istream& in, MyVector2& b) {
    for (int i=0; i<b.length; i++) in >> b.a[i];
    return in;
}