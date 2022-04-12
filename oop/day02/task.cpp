#include <iostream>
#include <math.h>
using namespace std;

class Number{

private: 
	int _n, _x;
	string _Operator;
public: 
	Number(int n, int x, string Operator){
	_n = n;
	_x = x;
	_Operator = Operator;
}
int add(){
int AddSum = 0, coefficient;
string result;
int n = _n;
cout << "Coefficient (" << n << ") :  ";
cin >> coefficient;
if(_Operator == "add"){
	while(n >= 0){
	AddSum += (coefficient * pow(_x, n));
	result += (to_string(coefficient) + " * " + to_string(_x) + " ^ " + to_string(n)) + " + ";
	n--;	
	coefficient--;
	}
	cout << result.substr(result.length()-1) << " = ";	
}
	return AddSum;
}
int subtract(){
int AddSum = 0,coefficient;
int n = _n;
string result;
cout << "Coefficient (" << n << ") :  ";
cin >> coefficient;
if(_Operator == "subtract"){
	while(n >= 0){
	AddSum -= (coefficient * pow(_x, n));
	result += (to_string(coefficient) + " * " + to_string(_x) + " ^ " + to_string(n)) + " + ";
	n--;
	coefficient--;
	}	
}
	cout << result.substr(result.length()-1) << " = ";
	return AddSum;
}
int multiply(){	
int AddSum = 0, coefficient;
string result;
int n = _n;
cout << "Coefficient (" << n << ") :  ";
cin >> coefficient;	
if(_Operator == "multiply"){
	int AddSum = 0;
	while(n >= 0){
	AddSum *= (coefficient * pow(_x, n));
	result += (to_string(coefficient) + " * " + to_string(_x) + " ^ " + to_string(n)) + " + ";
	n--;
	coefficient--;
}
	cout << result.substr(result.length()-1) << " = ";
}
	return 	AddSum;
}
};
int main(){
int n, x;
string Operator;
cout << "Input members' count: ";
cin >> n;
cout << "Input X: ";
cin >> x;
cout << "Input operator(add,subtract,multiply) : ";
cin >> Operator;

Number* number = new Number(n,x,Operator);
cout << number-> add() << endl;
cout << number-> subtract() << endl;
cout << number-> multiply() << endl;

return 0;
}
