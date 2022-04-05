#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char operato_r;
    
    cout << "Input first number ";
    cin >> num1;
 
    cout << "Enter operator ";
    cin >> operato_r;
 
    cout << "Enter number ";
    cin >> num2;

	switch (operato_r){
        	case '+':
			 cout << num1 << " + " << num2 << " = " << num1 + num2;
			 break;
        	case '-': 
			 cout << num1 << " - " << num2 << " = " << num1 - num2;
			 break;
        	case '*':
			 cout << num1 << " * " << num2 << " = " << num1 * num2;
			 break;
       		case '/':
			 cout << num1 << " / " << num2 << " = " << num1 / num2;
			 break;

	}

    return 0;
}

