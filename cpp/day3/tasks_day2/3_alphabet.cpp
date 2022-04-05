#include <iostream>
using namespace std;

void alphabet (char letter){
     
	if (letter >= 'a' &&  letter <= 'z'  ||  letter >= 'A' && letter <= 'Z'){
		switch (letter){
       
       			 case 'a':
			 case 'A':
			 case 'e':
			 case 'E':
			 case 'i':
			 case 'I':
			 case 'o':
			 case 'O':
				  cout << letter << " is a vowel ";
				  break;
       			 default :
				  cout << letter << " is a consonant ";
				  break;
		}
	}
 
	else {
		cout << letter << "is not character " << endl;
	}
}

int main() {
char letter;
cout << "Enter an alphabet ";
cin >> letter;

alphabet(letter);

return 0;
}
