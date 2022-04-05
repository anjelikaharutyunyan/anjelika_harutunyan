#include <iostream>
#include <math.h>
using namespace std;

int multiplication (int number){

	int i = 1;
        while (i <= 10){
        
	cout << number << " * " << i << " = " << number * i << endl;
        i++;
  	}
return 0;
}

int main()
{
	int number;
	cout << "Enter a number : ";
	cin >> number;
	
return multiplication(number);
}
