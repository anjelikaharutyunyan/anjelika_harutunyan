#include <iostream>
#include "atoi.h"
using namespace std;

int myatoi (char  *atoi) {
	 
	int result = 0;

	for ( int i = 0;  atoi[i] != '\0'; i++){
		if( atoi[i] >= 48 && atoi[i] <= 57){
			result = result * 10 + (atoi[i] - '0');

	} else { 
		break;
	 }
 	   
}
		return result;

}
