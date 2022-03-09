#include <iostream>
#include <bitset>
using namespace std;
bitset<8> toBinary( int n ){
	return bitset<8>(n);
}


int main(){
	int n = 20;
	cout << "The binary representation of " << n << " is " << toBinary(n) << endl;

return 0;
}
