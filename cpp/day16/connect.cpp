#include <iostream>
#include "booking.h"
//include clien library
using namespace std;

int main(){


string user;
cout << "Input to connect on agent or client: ";
cin >> user;

if(user == "agent"){

	cout << "You are logged in as an agent " << endl;
	agent();
}
else{

	cout << "You are logged in as client: ";
}

return 0;





}
