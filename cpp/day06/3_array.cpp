#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

int main(){
    
srand(time(0)); 
int size, temp = 0, number = 0;
cout << "Enter size : ";
cin >> size;   
int *arr = new int [size];
int a, b;

for(int i = 0; temp != size; i++){
	a =  1 + random()%20;
	b = 1 + random()%20;
	number  = a*a + b*b;

	if (number % 5 == 0){
		arr[temp] = number;
		cout << arr[temp] << " ";
		temp++ ;
	}	
}

return 0;
}
