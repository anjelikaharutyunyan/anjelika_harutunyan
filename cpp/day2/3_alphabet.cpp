#include <iostream>
using namespace std;
int main (){
 char alphabet;
	cout << "Input  alphabet ";
	cin >> alphabet;
	switch (alphabet){
	case 'a': case 'e': case 'i': case 'o': case 'u': cout << alphabet <<" is vowel"; break;
	case 'A': case 'B': case 'I': case 'O': case 'U': cout << alphabet << " is a vowel"; break;
	default: cout << alphabet << " is constant";



}

return 0;
}
