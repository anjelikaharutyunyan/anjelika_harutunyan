#include <iostream>
using namespace std;

int main()
{
	int month;
	cout << "Input month number:  ";
  	cin >> month;

	switch( month ){

    case 1: case 3: case 7: case 8:case 10: 

	cout << "Total number of days: 31 "; break;

    case 4: case 6:case 9:case 11:
	
	 cout << "Total number of days: 30 "; break;
   
    case 2: cout << "Total number of days: 29 or 28 "; break;
  
	}

    return 0;
}

