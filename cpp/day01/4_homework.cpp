#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int chickens, cows, pigs, sum = 0;
	cout << " How many chickens farmer has? ";
	cin >> chickens;
	cout << "How many cows farmer has? ";
	cin >> cows;
	cout << "How many pigs farmer has? ";
	cin >> pigs;

	sum = 2*chickens + 4*cows + 4*pigs;
	cout << "Farmer has " << sum << " animals in his farm";

return 0;
}
