#include <iostream>
#include <math.h>
using namespace std;

int farm_animals (int chickens, int cows, int pigs){

	int sum = 0;
	sum = 2*chickens + 4*cows + 4*pigs;
	cout << " Farmer has " << sum << " animals in his farm \n";

return sum;
}

int main(){

int chickens, cows, pigs;
        cout << "Chickens are ";
	cin >>  chickens;
        cout << "Cows are ";
	cin >> cows;
        cout << "Pigs are ";
	cin >> pigs;

return farm_animals(chickens,cows,pigs);

}
