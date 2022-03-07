#include <iostream>

using namespace std; 
double f ( int a, char x, int b){

switch ( x ){
        case '+': cout << a <<"+" << b << "=" << a+b; break;
        case '-': cout << a << "-" << b << "=" << a-b;break;
        case '*': cout << a << "*" << b << "=" << a*b;break;
        case '/': cout << a << "/" << b << "=" << a/b;break;

}

return 0;
}

int main()
{
  return f (3,'*',7);
}
