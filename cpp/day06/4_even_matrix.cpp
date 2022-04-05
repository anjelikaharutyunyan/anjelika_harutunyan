   #include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
const  int  m = 6;
const int n = 3;
 
   int arr[m][n],j,i;
   int d=0;
   
   for( i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 1 + rand() %5;
            cout << arr [i][j] << "  ";
        }
         cout << endl;
   }
      for(int i = 0; i < m; i++){
        int even = 0;
        int count=0;
        for(int j = 0; j < n; j++){
          if(arr[i][j]%2==0 ) {
              count++;
              if(count==j){
                  even = arr[i][j];
              }
          }     
        }
        if(count==n){
              cout << i+1 << " line is even" << endl;
              break;
              d = i-1;
          }else
        if( d == m-1 ){
                  cout << "NO" << endl;
          }
         d++;
   }
    return 0;
}


