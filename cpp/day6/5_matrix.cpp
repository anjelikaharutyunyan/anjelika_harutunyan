#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main(){
 int n, m, sum=0;
	cout << "First matrix size: " << endl;
	cin >> n;
	cout << "Second matrix size: " << endl;
	cin >> m;
int matrix1[n][n];
int matrix2[m][m];
if (n!=m){
	cout << "The dimensions of these matrices don't  match";
 return 0; }

 for(int i = 0; i < n; i++){
	for (int j = 0; j < n; j++ ){
	matrix1[i][j] = 1+ rand()%10;
	cout << matrix1[i][j] << "\t";
 
}
	cout << endl; 
}
	cout << endl;
 for (int a = 0; a < m; a++){
	for (int b = 0; b < m; b++){
	matrix2[a][b] = 1 + rand()%10;
	cout << matrix2[a][b] << "\t";
}
	cout << endl;
}
	cout << endl;
 for ( int i=0; i < n; i++){
	for(int j = 0; j < n;j++){
	  sum = matrix1[i][j] +  matrix2[i][j];
	cout << sum << '\t';
}
	cout << endl;
}
return 0;
}
