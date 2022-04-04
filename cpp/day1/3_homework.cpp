#include <iostream>

using namespace std;

int main()
{

int year, count = 0;

	cout << "Enter year: ";
	cin >> year;

	while (count != 20){
    
	if  (year % 4 == 0 && year % 100 != 0){
		count =  count + 1;
		cout << year << " is leap year "<< endl;
	}
        	year++;
       
	}

return 0;

}

