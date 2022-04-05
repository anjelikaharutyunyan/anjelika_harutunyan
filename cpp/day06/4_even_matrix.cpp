#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
srand(time(0));

int  m, n;
cout << "Rows :  ";
cin >> m;
cout << "Columns : ";
cin >> n;

const int row = m , column = n; 
int arr[row][column];
int temp = 0;
   
   for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            arr[i][j] = 1 + rand() % 5;
            cout << arr [i][j] << "  ";
        }
         cout << endl;
   }
      
	for(int i = 0; i < row; i++){
        int even = 0, count = 0;
       
        for(int j = 0; j < column; j++){
          if(arr[i][j] % 2 == 0){
              count++;
              if(count == j){
                  even = arr[i][j];
              }
          }     

        }
        if(count == column){
              cout << i+1 << " line is even" << endl;
              break;
              temp = i-1;
          }
	else if( temp == row - 1 ){
                  cout << "There is NO even line" << endl;
          }
         temp++;
   }
    return 0;
}
