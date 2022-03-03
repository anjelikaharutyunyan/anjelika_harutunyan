#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int year,count = 0;
	cout << "mutqagrel taretivy ";
	cin >> year;
while (count != 20){
if ((year%400==0) || (year%4==0 && year%100 != 0)){
	year = year+4;
	cout << year << "is leap year "<<endl;
}
	count = count + 1;
}
return 0;
}

