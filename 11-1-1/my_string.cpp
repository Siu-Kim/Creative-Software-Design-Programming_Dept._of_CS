#include "my_string.h"


MyString& MyString::operator = (const MyString& b){
    str = b.str; 
    std::cout << "assignment operation" << std::endl; 
    return *this;
}

MyString MyString::operator+(const MyString& b){
    this -> str += b.str;
    return *this;
}

MyString MyString::operator*(const int b){
    int i = b - 1;
    while(i > 0){
        this -> str += str;
        i--;
    }
    
}

std::ostream& operator<<(std::ostream& out, MyString& my_string){
    out << my_string.str << std::endl;
    return out; 
}
std::istream& operator>>(std::istream& in, MyString& my_string){
    in >> my_string.str;
    return in;
}
