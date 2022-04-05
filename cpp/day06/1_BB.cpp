#include <iostream>
#include <string.h>
using namespace std;

int main(){

string str;
cout << "Enter the sentance : ";
getline(cin,str);

int count = 0, B = 0;
	for (int i = 0; i <  str.length() ; i++){
        	if ( str[i] == 'B'){
               		count++;
        }

        if((str[i + 1] == ' ' || str[i + 1] == '\0') && count == 2){
           ++B;
           count = 0;
        }
    }
        cout << "The number of words with 'B' are " << B;
    return 0;
}

