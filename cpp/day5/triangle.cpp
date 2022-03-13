#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(0));
    
   const int n = 3;
   int arr[n][n];
   int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5=0, sum6=0, sum7=0,sum8=0;
   
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
  
          cout << " Top left triangle size = " << sum1 << endl;
          cout << " Bottom right triangle size  = " << sum2 << endl;
          cout << " Bottom left triangle size  = " << sum3 << endl;
          cout << " Top right triangle size = " << sum4 << endl;
          cout << " Top center triangle size = " << sum5 << endl;
          cout << " Left center triangle size = " << sum6 << endl;
          cout << " Bottom center triangle size = " << sum7 << endl;
          cout << " Right center triangle size = " << sum8 << endl;
    return 0;
}
