#include <iostream>

using namespace std;

int main()
{
   int rows, cols;
   cout << "Enter columns and rows: " << endl;
   cin >> rows >> cols;
   int **table = new int* [rows];
   for(int **ptr1 = table; ptr1 < table + rows; ptr1++){
        *ptr1 = new int[cols];
      
   for(int *ptr2 = *ptr1; ptr2 < *ptr1 + cols; ptr2++){
       *ptr2 = rand()%10;
       cout << *ptr2 << " ";
   }
   
       cout << endl;
   }
   

    return 0;
}


