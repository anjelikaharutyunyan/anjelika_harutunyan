#include<iostream>

using namespace std;

void  perfect_number (int number){
int sum = 0;
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
}
int main()
{
	perfect_number(6);
return 0;
}
