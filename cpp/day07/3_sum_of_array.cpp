#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void sum(int *arr, int size){
	srand(time(0));
	int sum = 0;
	int *ptr = arr;
	while( ptr < arr + size){
	sum = sum + *(ptr++);		
 	}
	cout << "Sum = " << sum << endl;
}

int main(){

int size;
cout << "Enter size of array: ";
cin >> size;

int *arr = new int[size];
int *ptr = arr;

for(int i = 0; i < size; i++){
	arr[i] = 1 + rand() % 10;
	cout << arr[i] << " "; 

}

sum(ptr,size);
return 0;
}

