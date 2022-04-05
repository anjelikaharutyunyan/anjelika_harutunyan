#include <iostream>
using namespace std; 

void calculator( int num1, char op, int num2){

	switch (op){
        	case '+': 
			cout << num1  << " + " << num2 << " = " << num1 + num2;
			 break;
        	case '-':
			cout << num1 << " - " << num2 << " = " << num1 - num2;
			break;
       		case '*':
			cout << num1 << " * " << num2 << " = " << num1 * num2;
			break;
        	case '/': 
			cout << num1 << "/" << num2 << " = " << num1 / num2; 
			break;
		default : 
			cout << "There is no such operator"; 
			break;
	}

}

int main(){

int num1, num2;
char op;

cout << "Enter first number : " << endl;
cin >> num1;
cout << "Enter operator : " << endl;
cin >> op;
cout << "Enter second number : ";
cin >> num2;

calculator (num1,op,num2);

return 0;
}
