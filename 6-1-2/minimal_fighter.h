// minimal_fighter.h

#ifdef __minimal_fighter__
#define __minimal_fighter__

#include <iostream>

using namespace std;

enum EFighterStatus
{
	invalid = 0,

	Alive,
	Dead,
};
typedef enum EFighterStatus FighterStatus;


class MinimalFighter
{
	private:
		int mHp, mPower;
		FighterStatus mStatus;
			

	public:
		MinimalFighter();
		MinimalFighter(int _hp, int _power);

		int hp(); // get mhp
		int Power(); // get mPower 
		FighterStatus status(); // get mStatus
		void setHp(int _hp); // set mHp
		void hit(MinimalFighter *_enemy); // run Hit command
		void attack(MinimalFighter *_enemy); // run attack command
		void fight(MinimalFighter *_enemy); // run Fight command

};

#endif
