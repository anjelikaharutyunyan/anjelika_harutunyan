#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int number, i = 1;
	cout << "Enter a number for multiplication: ";
	cin >> number;

	while (i <= 10){
	cout << number << "*" << i << "=" << number * i << endl;
	i++;
}

  return 0;
}





