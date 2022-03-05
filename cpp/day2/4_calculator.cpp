#include <iostream>

using namespace std;

int main()
{
    int a,b;
char x;
        cout << "Enter number ";
        cin >> a;
        cout << "Enter operator ";
        cin >> x;
        cout << "Enter number ";
        cin >> b;
switch ( x ){
        case '+': cout << a <<"+" << b << "=" << a+b; break;
         case '-': cout << a << "-" << b << "=" << a-b;break;
        case '*': cout << a << "*" << b << "=" << a*b;break;
        case '/': cout << a << "/" << b << "=" << a/b;break;

}


    return 0;
}

