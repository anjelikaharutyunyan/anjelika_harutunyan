#include <iostream>
#include <math.h>
using namespace std;

void rectangle (int length, int width){

	int perimeter = 0, area = 0;
	perimeter = (2 * length) + (2 * width);
	area = length * width;

        cout << "Area of Rectangle = " << area <<endl;
        cout << "Perimeter of Rectangle = " << perimeter;
}

int main()
{
int length, width;
cout << "Length = ";
cin >> length;
cout << "Width = ";
cin >> width;

rectangle(length,width);

return 0;
}
