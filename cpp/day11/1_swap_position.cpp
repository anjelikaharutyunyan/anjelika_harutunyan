#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){

srand(time(0));
int n;
cout << "Enter array size: ";
cin >> n;
const int size = n;
int arr[size];
cout << "Current array is: ";

	for( int i = 0; i < size; i++){
	       arr[i] = rand()%10;
		cout  << arr[i];
	}
	cout << endl;
int position1, position2;
cout << "Enter positions: " << endl;
cin >> position1;
cin >> position2;


if( position1 > 0 && position1 < size && position2 > 0 && position2 < size){
	arr [position2 - 1] = arr[position2 - 1] - arr[position1 - 1];
	arr[position1 - 1] = arr[ position2 - 1] + arr[position1 - 1];
	arr[position2 - 1] = arr[position1 - 1 ] - arr[position2 - 1];
}
else{
	cout << "That position is not belong to this range";
	return 0;
}
cout << "Swapped array is : ";
	for( int i = 0; i < size; i++){
	cout << arr[i];
}

return 0;
}
