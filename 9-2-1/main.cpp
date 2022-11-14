#include "animal.h"

using namespace std;

int main()
{
    char type;
    string name;
    int age;
    int numStripes;
    string favoriteToy;

    vector<Animal*> animals;

    cin >> type;

    while(true){
        if(type == '0'){
            for(int i = 0; i < animals.size(); i++){
                animals[i]->printInfo();
            }

            for(int i = 0; i < animals.size(); i++){
                delete animals[i];
            }
            
            return 0;
        }
        if(type == 'z'){
            cin >> name >> age >> numStripes;
            animals.push_back(new Zebra(name, age, numStripes));
            
        }
        else if(type == 'c'){
            cin >> name >> age >> favoriteToy;
            animals.push_back(new Cat(name, age, favoriteToy));
        
        }
    }
    
    return 0;
}