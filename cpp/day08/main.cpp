#include <iostream>
#include "atoi.h"
using namespace std;

int main (int argc, char *argv[]){
int sum = 0;
if(argc == 3){
	sum = myatoi(argv[1]) + myatoi(argv[2]);
	cout << sum << endl  << endl;

}
return 0;
}



