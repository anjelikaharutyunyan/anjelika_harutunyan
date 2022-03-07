#include <iostream>
using namespace std;
int main() {
char alphabet;
	cout << "Input alphabet : ";
	cin >> alphabet;

if ( alphabet >= 'a' &&  alphabet <= 'z'  ||  alphabet >= 'A' && alphabet <= 'Z' ){

switch ( alphabet ){
        
        case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': 
        case 'o': case 'O':  cout << alphabet << " is a vowel "; break;
        default : cout << alphabet << " is a consonant ";
return 0;
}
}
}
