#include <iostream>
#include <math.h>
using namespace std;

int  factorial (int number){

	if( number > 1)
		
		return number * factorial(number - 1);
	else
		return 1;
}

int main(){

int number;

cout << "Enter number : ";
cin >> number;

cout << "Factorial of " << number << " = " << factorial(number) << endl;

return 0;
}
