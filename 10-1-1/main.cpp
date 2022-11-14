#include "shape.h"

using namespace std;

int main(){
    char type_shape;
    double width, height;

    vector<Shape*> arr;

    while(true){
        cin >> type_shape;

        if(type_shape == '0'){
            for(int i = 0; i < arr.size(); i++){
                cout << arr[i]-> getArea() << endl;
            }

            for(int i = 0; i < arr.size(); i++){
                delete arr[i];
            }

            /*for(int i = 0; i< arr.size(); i++){
                
            }*/
        
            return 0;
        }

        if(type_shape == 'r'){
            cin >> width >> height;
            arr.push_back(new Rectangle(width, height));

        }
        else if(type_shape == 't'){
            cin >> width >> height;
            arr.push_back(new Triangle(width, height));

        }

    }

    return 0;
}