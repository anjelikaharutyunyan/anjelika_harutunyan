#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct data{                          
    string dataInfo = "";
    string Note = "";
    string command = "";
};


enum weekDay{                          
    Mon = 1,
    Tue,
    Wed,
    Thu,
    Fry,
    Sut,
    Sun
};

 
void  adding_data_to_string(string, int*, int*, int*);
int week(int, int, int);
bool isEmpty(string);




int main() {   
    int dd = 0, mm  = 0, yy = 0; 
    struct data data_input;
	data_input.command = "add";

    while( data_input.command == "add") {

      cout << "Input day (dd/mm/yy): ";
      cin >> data_input.dataInfo;
      cout << "Input Note: ";
      cin.ignore();
      getline(cin,data_input.Note);
      adding_data_to_string(data_input.dataInfo,&dd,&mm, &yy);
      string dayname = "";   
   
      int wday1 = week(dd,mm,yy);
      weekDay wday = (weekDay) wday1;
      switch(wday) {                          
          case Mon:  dayname = "Monday";    break;
          case Tue:  dayname = "Tuesday";   break;
          case Wed:  dayname = "Wednesday"; break;
          case Thu:  dayname = "Thusday";   break;
          case Fry:  dayname = "Friday";    break;
          case Sut:  dayname = "Suturday";  break;
          case Sun:  dayname = "Sunday";    break;
      }
                 
      string file = to_string(dd) + "_" + to_string(mm) + "_" + to_string(yy)+".txt";
      fstream myfile;
      myfile.open(file, fstream::in | fstream::out | fstream::app);
      if (myfile.is_open()) {	

        if (isEmpty(file)) {
            myfile << dayname <<"\t" <<  data_input.dataInfo <<  "\t" <<  data_input.Note << "\n"; 
          }
          else {
            myfile << "\t\t\t" <<  data_input.Note << "\n";
          }  
      }

cout << "Command: add/exit ";                                           
      cin >> data_input.command;
    
	if(data_input.command != "add" && data_input.command != "exit"){
	
	cout << "Enter command (add/exit): ";
	cin >> data_input.command;

	}
}                        
          return 0;
      }
    


 int week(int dd, int mm, int yy) {                     
    int weeknumber = dd + ((153 * (mm + 12 * ((14 - mm) / 12) - 3) + 2) / 5) 
                + (365 * (yy + 4800 - ((14 - mm) / 12)))
                + ((yy + 4800 - ((14 - mm) / 12)) / 4)
                - ((yy + 4800 - ((14 - mm) / 12)) / 100)
                + ((yy + 4800 - ((14 - mm) / 12)) / 400)
                - 32045;

    return (weeknumber + 1) % 7 ;
}

void  adding_data_to_string(string text, int *day, int *month, int *year) {        
    string  dx = "";
    string  dd = "";
    string  mm = "";
    string  yy = "";
    int temp = 0;

    for(int i = 0; text[i] !='\0'; i++) {

      if(text[i] != '/') {

        dx += text[i];

        temp++;
      }
      else if((temp == 1 || temp == 2) && text[i] == '/') {

        if(dx[0] == '0' && temp == 2) {

          dd = dx[1];

          dx = " ";
        }
        else{
          dd = dx;

          dx = "";
        }
      }
      else if((temp >= 2 && temp <= 4) && text[i] == '/') {
        if(dx[0] == '0' && temp == 4) {
          mm = dx[1];
          dx = " ";
        }
        else {
          mm = dx;
          dx  = "";
        }
       
      }
    }
    yy = dx;
    *day = stoi(dd);
    *month = stoi(mm);
    *year = stoi(yy);
}

bool isEmpty(string file) {        
    fstream myfile;
    string str = "";

    myfile.open( file, fstream::in | fstream::out | fstream::app);

    while (!myfile.eof()) {
      myfile >> str;
 
    }
 
    if(str == "") {
      return true;
    }
    else {
      return false;
    }

}
