#include"die.h"
using namespace std;




int setSides()
{
	int numSides;
	cout << "How many sides per dice?" << endl;
	cin >> numSides;
	return numSides;
}

int setRolls() 
{
	int numRolls;
	cout << "How many times would you like to roll?" << endl;
	cin >> numRolls;
	return numRolls;
	//seed random
	srand(static_cast<unsigned int>(time(0)));
}

int rollDie(int numSides)
{
		//generated random
		int randomNumber = rand();
		//die between 1 and max
		int die = (randomNumber % numSides) + 1; 
		
		return die;
}





