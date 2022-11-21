#include "my_vector.h"

MyVector::MyVector() { a = new double[0]; }

MyVector::MyVector(int length) { 
    this->length=length; 
    this->a = new double[this->length];
}

MyVector::~MyVector() {
    delete a;
}

MyVector& MyVector::operator=(const MyVector& b) {
    delete a;
    a = new double[b.length];
    length = b.length;
    for (int i=0; i<length; i++) a[i] = b.a[i];
    return *this;
}

MyVector MyVector::operator+(const MyVector& b) {
    MyVector temp(length);
    for (int i=0; i<length; i++) temp.a[i] = this->a[i]+b.a[i];
    return temp;
}

MyVector MyVector::operator-(const MyVector& b) {
    MyVector temp(length);
    for (int i=0; i<length; i++) temp.a[i] = this->a[i]-b.a[i];
    return temp;
}

MyVector MyVector::operator+(const int b) {
    MyVector temp(length);
    for (int i=0; i<length; i++) temp.a[i] = this->a[i]+b;
    return temp;
}

MyVector MyVector::operator-(const int b) {
    MyVector temp(length);
    for (int i=0; i<length; i++) temp.a[i] = this->a[i]-b;
    return temp;
}

std::ostream& operator<< (std::ostream& out, MyVector& b) {
    for (int i=0; i<b.length; i++) out << b.a[i] << " ";
    return out;
}

std::istream& operator>> (std::istream& in, MyVector& b) {
    for (int i=0; i<b.length; i++) in >> b.a[i];
    return in;
}