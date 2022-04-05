#include <iostream>

using namespace std;

  int main()  
{  
    int a[5], i, *small,*large;  
  
    cout << "Enter  integer numbers\n" ;  
    for(i = 0; i < 5; i++) { 
        cin >> a[i];  
    }
    small = &a[4];  
   large = &a[0];
    for(i = 0; i < 4 ;i++)  
    {  
        if( *(a + i) < *small)  {
            *small = *(a + i);  
    }  
    if( *(a + i) > *large)  {
            *large = *(a + i);  
    }  
    
    }
   cout << "Smallest Element In The Array: "<< *small << endl;  
  cout << "Largest Element In The Array: "<< *large;
    
    return 0;

