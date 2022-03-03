#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int number,count=1,faktorial=1;
	cout << "Enter number";
	cin >> number;
while (count <= number){
 faktorial = faktorial*count;
 count = count+1;
}
	 cout << "Factorial of Given Number is "<<faktorial<<endl;


return 0;
}
