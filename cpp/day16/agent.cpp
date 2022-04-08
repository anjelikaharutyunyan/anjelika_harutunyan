#include <iostream>
#include <fstream>
using namespace std;

int main(){
int menu();
start:
int a;
a = menu();
if(a == 0) {   
	string rows = "";
	string add;

	cout << "Enter city: ";
	getline(cin,add);
	getline(cin,add);
	rows += add + " ";

	cout << "Enter hotel name: ";
	getline(cin,add);
	rows += add + " ";

	cout <<"Enter star rate: ";
	getline(cin,add);
	rows += add + " ";

	cout << "Enter singl room: ";
	getline(cin,add);
	rows += add + " ";
            
	if(add != "0"){
           
        cout << "Enter per night price: " ;
       	getline(cin,add);
        rows += add + " ";
        }
        else{
        rows += add + " ";
        }

        cout << "Enter twin room: ";
        getline(cin,add);
        rows += add + " ";
            
        	if(add != "0"){
                	cout << "Enter per night price: " ;
                	getline(cin,add);
               		rows += add + " ";
            	}
              	
		else{
                    rows += add + " ";
            	}


         cout << "Enter triple room: ";
         getline(cin,add);
         rows += add + " ";

         if(add != "0"){   
                cout << "Enter per night price: " ;
                getline(cin,add);
                rows += add + " ";
          }
          else{
                rows += add + " ";

          }
          cout << "Enter 4  room: ";
          getline(cin,add);
          rows += add + " ";
 
          if(add != "0"){
            
                cout << "Enter per night price: " ;
                getline(cin,add);
                rows += add + " ";
          }
          else{
                rows += add + " ";

          }
	
	   cout << "Enter existing of spa (0/1): ";
           getline(cin,add);
           rows += add + " ";
          
	   cout << "Enter existing of gym (0/1): ";
           getline(cin,add);
           rows += add + " ";
         
           cout << "Enter existing of wi-fi (0/1): ";
           getline(cin,add);
           rows += add + " ";
  
           cout << "Enter existing of parking (0/1): ";
           getline(cin,add);
           rows += add + " ";
         
ofstream file("booking.txt", ios::app);
file << rows << endl;
file.close();



int command;
cout << "Exit(0) or Continue(1): ";
cin >> command;

if(command == 1){
	goto start;
}
}
return 0;
}


int menu(){

cout << "  WELCOME  \n  Do you admin(0)  or  client(1)  " << endl;
int choose;
cin >> choose ;

return choose;

}

