#include <iostream>
#include <string>
#include <sstream>

#include "minimal_fighter.h"

using namespace std;
	
templete <typename T>
string to_string(T value)
{
	std::ostringstream os ;
	os << value ;
	return os.str() ;

}

string infoLog(MinimalFighter *_fighter)
{
	if(_fighter -> status() == Dead) return "DEAD";
	string output = "";
	output += "H" + to_string(_fighter->hp());
	output += ", ";
	output += "P" + to_string(_fighter->power());

	return output;
}

bool processFight()
{
	int IHp; IPower, rHp, rPower;
	char command;
	cin >> IHp >> IPower >> command >> rHp >> rPower;
	if(cin.fail()) return false;

	MinimalFighter *left = new MinimalFighter(IHp, IPower);
	MinimalFighter *right = new MinimalFighter(rHp, rPower);

	if(command == 'H') left->hit(right);
	else if(command == 'A') left->attack(right);
	else if(command == 'F') left->fight(right);

	cout << infoLog(left) << " / " << infoLog(right) << endl;

	delete left;
	delete right;

	return true;
}


int main(void)
{

	while(processFight()){}
	return 0;
}


