#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct data{                          
    string dataInfo = "";
    string Note = "";
    string command = "";
};


enum weekD{                          
    Mon = 1,
    Tue,
    Wed,
    Thu,
    Fry,
    Sut,
    Sun
};

 
void  toStr(string, int*, int*, int*);
int weekDay(int,int,int);
bool isEmpty(string);




int main() {   
    int dd = 0, mm  = 0, yy = 0; 
    struct data data_input;

    while(true) {

      cout << "Input day (dd/mm/yy): ";
      cin >> data_input.dataInfo;
	cin.ignore();
      cout << "Input Note: ";
      getline(cin,data_input.Note);
      toStr(data_input.dataInfo,&dd,&mm, &yy);
      string dayname = "";   
   
      int wday1 = weekDay(dd,mm,yy);
      weekD wday=(weekD) wday1;
      switch(wday) {                          
          case Mon:  dayname = "Monday";    break;
          case Tue:  dayname = "Tuesday";   break;
          case Wed:  dayname = "Wednesday"; break;
          case Thu:  dayname = "Thusday";   break;
          case Fry:  dayname = "Friday";    break;
          case Sut:  dayname = "Suturday";  break;
          case Sun:  dayname = "Sunday";    break;
      }
                 
      string way = to_string(dd) + "_" + to_string(mm) + "_" + to_string(yy)+".txt";
      fstream fis;
      fis.open(way, fstream::in | fstream::out | fstream::app);
      if (fis.is_open()) {
	
        if (isEmpty(way)) {
            fis << dayname <<"\t" <<  data_input.dataInfo <<  "\t" <<  data_input.Note << "\n"; 
          }
          else {
            fis << "\t\t\t" <<  data_input.Note << "\n";
          }  
      }

cout << "Command: add/exit ";                                           
      cin >> data_input.command;
    
      if(data_input.command == "add") {                                     
          continue;
      }
      else if(data_input.command == "exit") {                               
          return 0;
      }
      else {
          cout << "Enter Command: add/exit: ";                             
          cin >> data_input.command;
      }
    
    }

    return 0;
}







 int weekDay(int dd,int mm,int yy) {                     
    int weeknum = dd + ((153 * (mm + 12 * ((14 - mm) / 12) - 3) + 2) / 5) 
                + (365 * (yy + 4800 - ((14 - mm) / 12)))
                + ((yy + 4800 - ((14 - mm) / 12)) / 4)
                - ((yy + 4800 - ((14 - mm) / 12)) / 100)
                + ((yy + 4800 - ((14 - mm) / 12)) / 400)
                - 32045;

    return (weeknum + 1) % 7 ;
}

void  toStr(string text,int *x, int *y, int* z) {        
    string  dx = "";
    string  dd = "";
    string  mm = "";
    string  yy = "";
    int temp = 0;
    for(int i = 0; text[i] !='\0'; i++) {
      if(text[i] !='/') {
        dx += text[i];
        temp++;
      }
      else if((temp == 1 || temp == 2) && text[i] == '/') {

        if(dx[0] == '0' && temp == 2) {
          dd =dx[1];
          dx = " ";
        }
        else{
          dd = dx;
          dx = "";
        }
      }
      else if((temp >= 2 && temp <= 4) && text[i] == '/') {
        if(dx[0] == '0' && temp == 4) {
          mm =dx[1];
          dx = " ";
        }
        else {
          mm = dx;
          dx  = "";
        }
       
      }
    }
    yy = dx;
    *x = stoi(dd);
    *y = stoi(mm);
    *z = stoi(yy);
}

bool isEmpty(string way) {        
    fstream fanc;
    string str = "";

    fanc.open(way, fstream::in | fstream::out | fstream::app);

    while (!fanc.eof()) {
      fanc >> str;
 
    }
 
    if(str == "") {
      return true;
    }
    else {
      return false;
    }

}
