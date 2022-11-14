#include "animal.h"

using namespace std;

Animal::Animal(string name, int age)
{
    _name = name;
    _age = age;
    cout << "constructor of class Animal is executed" << endl; 
}

Zebra::Zebra(string name, int age, int numStripes) : Animal(name, age)
{

    cout << "constructor of class Zebra is executed" << endl;
}

Cat::Cat(string name, int age, string favoriteToy) : Animal(name, age)
{

    cout << "constructor of class Cat is executed" << endl;
}


void Zebra::printInfo()
{
    cout << "Zebra, " << "Name: " << _name << ", " << "Age: " << _age << ", " << "Number of stripes: " << _numStripes << endl;
}

void Cat::printInfo()
{
    cout << "Cat, " << "Name: " << _name << ", " << "Age: " << "_age" << ", " << "Favorite toy: " << _favoriteToy << endl;
}