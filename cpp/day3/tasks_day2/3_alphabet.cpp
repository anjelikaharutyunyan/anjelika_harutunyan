#include <iostream>
using namespace std;

char f( char alphabet){
        cout << "Inputed alphabet ";

	if ( alphabet >= 'a' &&  alphabet <= 'z'  ||  alphabet >= 'A' && alphabet <= 'Z' ){

 switch ( alphabet ){
       
        case 'a': case 'A': case 'e': case 'E': case 'i': case 'I':
        case 'o': case 'O':  cout << alphabet << " is a vowel "; break;
        default : cout << alphabet << " is a consonant ";
}
}
return 0;
}

int main() {

return f ( 'g' );
}
