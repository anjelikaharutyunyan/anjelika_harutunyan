#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    
   const int n = 3;
   int arr[n][n];
   int sum4 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum5=0, sum6=0, sum7=0,sum8=0;
   
   for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n; j++){
            arr[i][j] = 1 + rand() % 5;
            cout << arr [i][j] << "  ";
        }
         cout << endl;
   }
  
        for(int i = 0; i < n; i++){
      
             for(int j = 0; j < n; j++){           
                if (i + j < n -1){ 
                    sum1 += arr[i][j];
                }

                if (i+ j > n -1){ 
                    sum2 += arr[i][j];
                }

                if ( i > j){ 
                    sum3 += arr[i][j];
                }
                
                if(i < j){
                    sum4 += arr[i][j];
                }
                
               if(i < j && i + j < n - 1){
                   
                   sum5 += arr[i][j];
               }
               
               if(i > j && i + j < n - 1){
                   sum6 += arr[i][j];
               } 
            
                 if(i > j && i + j > n - 1){
                   sum7 += arr[i][j];
               } 
                 
                 if(i < j && i + j > n - 1){
                   sum8 += arr[i][j];
               } 
                 
            }
        }
  
          cout << " sum1 = " << sum1 << endl;
          cout << " sum2 = " << sum2 << endl;
          cout << " sum3 = " << sum3 << endl;
          cout << " sum4 = " << sum4 << endl;
          cout << " sum5 = " << sum5 << endl;
          cout << " sum6 = " << sum6 << endl;
          cout << " sum7 = " << sum7 << endl;
          cout << " sum8 = " << sum8 << endl;
    return 0;
}
