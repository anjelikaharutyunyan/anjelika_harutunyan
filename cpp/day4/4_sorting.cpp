#include<iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
        int  n,i,j,temp;
        cout << "Enter the size of array: ";
        cin >> n;
        int arr[n];

        for (i = 0; i<n; ++i){
                arr[i] =  rand()%100;
                cout  <<  arr[i] << " ";
}
        for (int i = 0; i<n-1; i++)
        {
                for (j = i+1; j < n ; j++)
                        if (arr[ i ] > arr[ j ])
                        {
                                temp = arr[ i ];
                                arr[ i ] = arr[j];
                                arr[j] = temp;
                        }
        }
cout << endl;
for (int i=0 ; i<n; i++){
cout  << arr[i] << " " ;
}
return 0;
}
