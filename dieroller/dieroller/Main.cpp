#include"die.h"

using namespace std;

vector<int> returnNums;
vector<int>::const_iterator iter;
int main()
{
	int numSides = 6;
	int numRolls = 1;
//number of sides and number of rolls
	numSides = setSides();
	numRolls = setRolls();

	for (int i = 0; i < numRolls; i++)
	{
		int thisroll = rollDie(numSides);
	//	cout << thisroll << endl;
		returnNums.push_back(thisroll);
	}
	//roll and add to vector
	cout << "your rolls were: " << endl;
	cout << endl;
	int i = 1;
	for (iter = returnNums.begin(); iter != returnNums.end(); ++iter)
	{
		cout << i << "- " << *iter << endl;
		i++;
	}
	cout << endl;
	
	system("pause");
	return 0;
}