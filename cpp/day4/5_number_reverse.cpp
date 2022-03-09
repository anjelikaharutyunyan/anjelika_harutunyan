#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
int main(){
srand(time(0));
int n, r;
	cout << "Enter array's size : ";
	cin >> n;
int arr [n];
	for ( int i=0; i< n; i++){
	arr[i] = rand()%100;
	cout << arr[i] << " ";

}
    cout <<  endl;
	for (int i = 0; i < n/2; i++){
		r= arr[i];
		arr[i] = arr [4-i];
		arr [4-i] = r;
}
		for (int i=0; i < n; i++){
			cout << arr[i] << " ";
}

return 0;
}
