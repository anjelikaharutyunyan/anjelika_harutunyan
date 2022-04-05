#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
   srand(time(0));
   int rows, cols;
   cout << "Enter columns and rows: " << endl;
   cin >> rows >> cols;

   int **table = new int* [rows];

   for(int **ptr = table; ptr < table + rows; ptr++){
        *ptr = new int[cols];
      
   for(int *ptr1 = *ptr; ptr1 < *ptr + cols; ptr1++){
       *ptr1 = rand()%10;
       cout << *ptr1 << " ";
   }   
       cout << endl;
   }
	cout << "Sorted array";
   for (int** ptr = table; ptr < table + rows; ptr++){

	for(int* ptr1 = *ptr; ptr1 < *ptr + cols ; ptr1++){

		for( int* ptr2 = ptr1 + 1; ptr2 < *ptr + cols ; ptr2++){

		if( *ptr2 < *ptr1 ){
			int temp = *ptr2;
			*ptr2 = *ptr1;
			*ptr1 = temp;
}

}
	cout << *ptr1 << " ";
}
	cout << endl;
}
    return 0;
}


