#include <iostream>
#include <math.h>
using namespace std;
int f ( int edg, int edg2){

        cout << "The 1st edg of rectangle " << edg << endl;
        cout << "The 2nd edg of rectangle " << edg2 << endl;
         cout << "Area of Rectangle = " << edg*edg2 << endl;
        cout << "Perimeter of Rectangle = " << (edg+edg2)*2;

return 0;
}

int main()
{
  f(4,7);

return 0;
}
