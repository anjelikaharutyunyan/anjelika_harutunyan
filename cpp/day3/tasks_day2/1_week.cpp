#include <iostream> 
using namespace std;

void WeekDay (int day){

	switch (day) {
		case 1:
			cout << "Monday\n ";
			 break;
		case 2:
			cout << "Tuesday\n ";
			 break;
       		case 3:
			cout << " Wednesday \n";
			 break;
       		case 4:
			cout << "Thursday \n";
			 break;
       		case 5:
			cout << "Friday \n";
			 break;
       		case 6:
			cout << " Saturday\n";
			 break;
       		case 7:
			cout << "Sunday\n ";
			 break;
       		default:
			 cout << " Enter number in range 1-7 ";
}

}

int main (){

int day;
cout << " Week day is : ";
cin >> day;

 WeekDay(day);

return 0;
}
