#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{

srand(time(0));
int n, max = 0;
	cout <<  "Enter size of the array: ";
	cin >> n;
int arr[ n ];

for ( int i = 0; i < n; i++ ){
    arr[ i ] = rand()%10;
    if( max < arr[ i ]){
        max = arr[ i ];
    }
}
cout << "maximum is " << max << endl;
for (int j=0; j < n; j++){
    cout << arr[ j ] << " ";
}
return 0;    
}
