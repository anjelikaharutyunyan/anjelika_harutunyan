#include <iostream>
using namespace std;

void leap_year (int year){

	int count = 0;

	while (count != 20){
    
		if  ( year % 4 == 0 && year % 100 != 0 ){
         		count++;
        		cout << year << " is leap year " << endl;
		}
       			 year++;
       
	}
}


int main()
{

int year;
cout << "Enter year : ";
cin >> year;

leap_year(year);
return 0;
}
