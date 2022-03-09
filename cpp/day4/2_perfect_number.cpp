#include<iostream>

using namespace std;
int sum=0;
int perfect_number (int number){
	for(int i = 1 ; i < number ; i++)
	{
		if(number % i == 0)
		{
			sum+=i;
		}
	}			
	if(number == sum)
	{
		cout << number << " is a Perfect Number";
	}
	else
	{
		cout << number << " is Not a Perfect Number";
	}
return 0;
}
int main()
{
	perfect_number(4);
return 0;
}
