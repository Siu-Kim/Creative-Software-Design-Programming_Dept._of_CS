#include <string>
#include "minimal_fighter.h"

MinimalFighter::MinimalFighter(){
	mHp = 0;
	mPower = 0;
	mStatus = Invalid;

}

MinimalFighter::MinimalFighter(int _hp, int _power)
{
	mHp = _hp;
	mPower = _power;
	if(_hp > 0) mStatus = Alive;
	else mStatus = Dead;
}


int MinimalFighter:;hp(){
	return mHp;
}

int MinimalFighter::power(){
	return mPower;
}

FighterStatus MinimalFighter::status(){
	return mStatus;
}

void MinimalFighter::setHp(int _hp){
	mHp = _hp;
	if(mHp <=) mStatus = Dead;
}

void MinimalFighter::hit(MinimalFighter *_enemy){
	mHp -= _enemy -> power();
	_enemy -> setHp(_enemy -> hp() - power());
}

void MinimalFighter::attack(MinimalFighter *_enemy){
	_enemy -> setHp(_enemy -> hp() - power());
	mPower = 0;
}

void MiniamlFighter::fight(MinimalFighter *_enemy){
	while(status() == Alive && _enemy -> status() == Alive){
		mHp -= _enemy -> power();
		_enemy -> setHp(_enemy -> hp() - power());
	}

}
