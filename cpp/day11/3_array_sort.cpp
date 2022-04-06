#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
srand(time(0));
int size;
cout << "Enter array's size: ";
cin >> size;
int *arr = new int [size];
cout << "Array's elements: ";
	
for(int i = 0; i < size; i++){
	arr[i] = rand()%10;
	cout << arr[i];
}
cout << endl;

int count = 0, max_len = 0, element = 0, first_element = 0;

for(int i = 0; i < size; i++){
	count = 0;
	for(int j = i; j < size - 1; j++){
		if( arr[j] > arr[j + 1]){
		break;
	}
		count++;
}
	element = count;
	if(element > max_len){

	max_len = element;
	first_element = i;
	}
}
	for(int i = first_element; i <= first_element + max_len; i++){
		cout << arr[i] << " ";
	}
return 0;
}
