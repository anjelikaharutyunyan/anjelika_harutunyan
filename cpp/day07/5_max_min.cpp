#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void max_min_element(int arr[], int size){
 int *small, *large, *ptr = arr;
 small = &arr[size - 1];
 large = &arr[0];
for(int i = 0; i < size - 1; i++){  
	if( *(arr+ i) < *small){
            *small = *(arr + i);  
    	}  
   	 if( *(arr + i) > *large){
            *large = *(arr + i);  
   	}  
}
cout << "Smallest element = " << *small << ", Largest element = " << *large << endl;  
}
int main(){

srand(time(0));
int size;
cout << "Array size: ";
cin >> size;
int *arr = new int[size];
for(int i = 0; i < size; i++){
	arr[i] = rand() % 10 + 1;
	cout << arr[i] << " ";
}
cout << endl;
max_min_element(arr,size);

  return 0; 
}
