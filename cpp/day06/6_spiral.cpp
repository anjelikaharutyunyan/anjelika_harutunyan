#include <iostream>
using namespace std;

int main(){
int n;
cout << "Enter array size: ";
cin >> n;
const int size = n;
int m = 1;
int arr[size][size] = {0};
    
for(int i = 0; i < (size / 2); i++){
       for(int j = i; j < (size - i); j++){
            arr[i][j] = m;
            m++;
        }
        for( int j = 1; j < (size - i - i); j++){
            arr[(j + i)][(size - i) - 1] = m;
            m++;
        }
        for( int j = (size - 2) - i; j >= i; j--){
            arr[(size - i) - 1][(j)] = m;
            m++;
        }
        for(int j = ((size - i) - 2); j > i; j--){
            arr[j][i] = m;
            m++;
        }
}

for(int i = 0; i < size; i++){
	for(int  j = 0; j < size - 1; j++){
            cout << arr[i][j] << " ";
        }
        cout << arr[i][size - 1] << endl;
}
    
    return 0;
}
