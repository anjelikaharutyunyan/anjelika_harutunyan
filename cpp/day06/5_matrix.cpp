#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main(){
int n, sum = 0;
cout << "Enter matrix size: " << endl;
cin >> n;
const int size = n;
int matrix1[size][size], matrix2[size][size];
cout << "First matrix" << endl;

for(int i = 0; i < n; i++){
	for (int j = 0; j < size; j++){
		matrix1[i][j] = 1 + rand() % 10;
		cout << matrix1[i][j] << "\t";
 
	}
	cout << endl; 
}

cout << "Second matrix" << endl;
for (int i = 0; i < size; i++){
	for (int j = 0; j < size; j++){
	matrix2[i][j] = 1 + rand() % 10;
	cout << matrix2[i][j] << "\t";
	}
	cout << endl;
}

cout << "Sum of 2 matrices" << endl;
for(int i = 0; i < size; i++){
	for(int j = 0; j < size; j++){
		 sum = matrix1[i][j] +  matrix2[i][j];
	cout << sum << '\t';
	}
	cout << endl;
}
return 0;
}
