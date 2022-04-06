#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int size (string a){
int n = 0;
	for(int i = 0; a[i] != '\0'; i++){
	n++;
	}
		return n;
	}

int main( ){
cout << "For armenian - english click 1" << endl << "For english - armenian click 2" << endl;
int number;
cin >> number;
string text;
cout << "Input : ";
string input;
cin.ignore();
getline(cin, input);
int count = 1;

for (int i = 0; i < input.length() ; i++){ 
     if (input[i] == ' ' ) { 
     count++;
    } 
 
 }

string  argv[count];
int size = 0;
	for(int j = 0; j < count; j++) {
      		string translate ;

    		  for (int i = size; i <input.length() ; i++) {
        		 if(input[i] == ' ') {
            			size = i;
             			size = size + 1;
        			break;
            		}
translate = translate + input[i];
   		  }
argv[j] = translate;
  	}

for (int i = 0; i < count ; i++) {
   	string word;
    	word = argv [i];
	ifstream myword("hy-en.txt");
	string bar;

while(getline (myword,bar)){   
    	string translate = "";
    	string translate2 = "";
int n  = 99999;

    	for (int i = 0; i < 20; i++) {
        	if(bar[i] == '-'){
           		 i = i + 2;

                for (int j = i ; ; j++){
                    if(bar[j] == '\0') {
	            i = n;
                    break;

                     }

                 translate2 = translate2 + bar[j];

                } 
	        }  
        	else {
		if (i == n) {
    	     	break;
             	}
        
            	 translate = translate + bar[i];
         	}
     }

    	if( number == 1 && word == translate){
   	 text = text + translate2 + " " ;
    }
	 if( number == 2 && word == translate2){
    	 text = text + translate + " " ;
       }
}

}
cout << text << endl;

return 0;    
}




