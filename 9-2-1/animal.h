#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal
{
    public:
        Animal(string name, int age);
        virtual void printInfo();

    protected:
        string _name;
        int _age;
};

class Zebra: public Animal
{
    public:
        Zebra(string name, int age, int numStripes);
        void printInfo();
    protected:
        int _numStripes;

};

class Cat: public Animal
{
    public:
        Cat(string name, int age, string favoriteToy);
        void printInfo();
    protected:
        string _favoriteToy;
};
