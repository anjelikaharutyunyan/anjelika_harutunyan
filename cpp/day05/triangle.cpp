#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

 int main(){
 srand(time(0));
 int  n;
 cout << "Enter array's size : ";
 cin >> n;
 const int size = n;
 int arr[size][size];
 int sum[8] = {0};
 
 for(int i = 0; i < size; i++){
	for(int j = 0; j < size; j++){
		arr[i][j] = 1 + rand() % 10;
		cout << " " << arr[i][j] << " ";
	}
	cout << endl;
}
  for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
		if (i + j < size - 1){ 
                    sum[0] += arr[i][j];
                }

                if (i+ j > size - 1){ 
                    sum[1] += arr[i][j];
                }

                if ( i > j){ 
                    sum[2] += arr[i][j];
                }
                
                if(i < j){
                    sum[3] += arr[i][j];
                }
                
               if(i < j && i + j < size - 1){
                   sum[4] += arr[i][j];
               }
               
               if(i > j && i + j < size - 1){
                   sum[5] += arr[i][j];
               } 
            
               if(i > j && i + j > size - 1){
                   sum[6] += arr[i][j];
               } 
                 
                if(i < j && i + j > size - 1){
                   sum[7] += arr[i][j];
               } 
                 
            }
        }
  
 cout << " Top left triangle size = " << sum[0] << endl;
 cout << " Bottom right triangle size  = " << sum[1] << endl;
 cout << " Bottom left triangle size  = " << sum[2] << endl;
 cout << " Top right triangle size = " << sum[3] << endl;
 cout << " Top center triangle size = " << sum[4] << endl;
 cout << " Left center triangle size = " << sum[5] << endl;
 cout << " Bottom center triangle size = " << sum[6] << endl;
 cout << " Right center triangle size = " << sum[7] << endl;

    return 0;
}
