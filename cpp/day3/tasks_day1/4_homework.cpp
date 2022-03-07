#include <iostream>
#include <math.h>

using namespace std;
	int f( int chickens, int cows, int pigs ) {

  int sum=0;
        cout << "Chickens are " << chickens << endl;
        cout << "Cows are " <<  cows << endl;
        cout << "Pigs are " << pigs << endl;
sum = 2*chickens + 4*cows + 4*pigs;
	cout << "Farmer has " << sum << " animals in his farm";

return 0;
}



int main(){
  f(35,20,12);


return 0;
}
