#include <iostream>
using namespace std;
 
void reverse(int size){
int temp = 0;
int *ptr = new int[size];
for(int i = 0; i < size; i++){
	*(ptr + i) = rand() % 10 + 1;
	cout << *(ptr + i);
}
for(int i = 0; i < size/2; i++){
	temp = *(ptr + i);
	*(ptr + i) = *(ptr + size - 1 - i);
	*(ptr + size - 1 - i) = temp;

}
	cout << endl;
	for(int i = 0; i < size; i++){

	cout << *(ptr + i);
	}
}
int main() {int size;
cout << "Enter size of array: ";
cin >> size;
reverse(size);

return 0;
}
