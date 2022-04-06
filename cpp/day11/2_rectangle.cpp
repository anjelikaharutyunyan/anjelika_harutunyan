#include <iostream>
using namespace std;
int main (){

int x1, y1, x2, y2, x3, y3, x4, y4;
cout << "Enter coordinates:" << endl;

cout << "A coordinates: ";
cin >> x1 >> y1;

cout << "B coordinates: ";
cin >> x2 >> y2;

cout << "C coordinates: ";
cin >> x3 >> y3;

cout << "D coordinates: ";
cin >> x4 >> y4;

if( y1 == y2 && x3 == x4) {
	cout << "Yes";
}
else {
	cout << "No";
}

return 0;
}
