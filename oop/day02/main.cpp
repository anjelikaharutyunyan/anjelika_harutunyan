#include <iostream>
#include "polynomial.h"
using namespace std;
int main() {
cout << " Number to multiply: ";
int number;
cin >> number;
int degree1;
int degree2;
cout << " Degree1 = ";
cin >> degree1;
int *arr1 = new int [degree1 + 1];
cout << " Coefficents: \n";
for(int i = degree1; i >= 0; --i) {
	cout << " x^" << i << ": ";
	cin >> arr1[i];
}
Polynomial p(arr1, degree1 + 1);
cout << " Polynomial 1 = ";
p.print();

cout << " degree2 = ";
cin >> degree2;
int *arr2 = new int [degree2 + 1];
cout << " Coefficents: \n";
for(int i = degree2; i >= 0; --i) {
	cout << " x^ " << i << ": ";
	cin >> arr2[i];
}
Polynomial temp;
Polynomial q(arr2, degree2 + 1);
cout << " Polynomial 2 = ";
q.print();

cout << " polynomial1 + polynomial2 = " ;
Polynomial answer;
answer = p + q;
answer.print();

cout << " polynomial1 - polynomial2 = " ;
answer = p - q;
answer.print();

cout << " polynomial1 * polynomial2 = " ;
answer = p * q;
answer.print();

temp = p;
cout << " polynomial1 += polynomial2 = ";
p += q;
p.print();

p = temp;
cout << " polynomial1 -= polynomial2 = ";
p -= q;
p.print();

p = temp;
cout << " polynomial1 *= polynomial2 = ";
p *= q;
p.print();


return 0;
}
