#include <iostream>
using namespace std;

 	int game (int number){
	int guess;
	
	do {

        	cout << "guess remembered number ";
        	cin >> guess;
		if (number < guess){      
			cout << "This number is greater than remembered, ";
		}

		else if (number > guess){
		        cout << "This number is less than remembered, ";
		}

		else if (number == guess){       
			cout << "You are guess the number!";

		}	
	}
	
	while (number != guess);
	
return 0;
}

int main(){
	int number;
	cout << "Remember a number: ";
	cin >> number;

       	return game(number);
}
