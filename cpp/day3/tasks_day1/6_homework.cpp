#include <iostream>
#include <math.h>

using namespace std;
	int f(int number){
  int count=1, faktorial=1;
        cout << "Entered  number is " << number << endl;
      
 while (count <= number){
 	faktorial = faktorial * count;
	 count = count + 1;
}
         cout << "Factorial of Given Number is "<< faktorial << endl;

return 0;
}

int main()
{

return f(5);
}
