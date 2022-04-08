#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int menu(){

cout << "  WELCOME  \n  Do you admin(0)  or  client(1)  " << endl;
int choose;
cin >> choose ;

return choose;

}
char plus_minus(bool a) {

if(a){
	return '+';
}
else{
	return '-';
}
}
/////////////////////////		AGENT		////////////////////////////////
int main(){

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
}

////////////////////////	CLIENT    	/////////////////////////////////


if(a == 1){

    struct client_hotel{
	string city;
	string hotelname;
	int star;
	int singlroom;
	int singl_price;
        int twinroom;
	int twin_price;
        int tripleroom;
	int triple_price;
        int quad_room;
	int quad_price;
	bool spa;
	bool gym;
        bool wifi;
	bool parking;
    };
ifstream line;
string str = "";
int rows = 0;
line.open("booking.txt");

while(getline(line,str)){
	rows++;
}
line.close();
  
struct client_hotel hotel[rows];
int parametr = 15;                             
string s = "";
string agent[parametr];    
ifstream booklist;
booklist.open("booking.txt");
int i = 0, count = 0; 
	while(!booklist.eof()){
		booklist >> str;
           	agent[i] = str;
	    	i++;
		if(i == parametr){
           		 hotel[count].city = agent[0];
           		 hotel[count].hotelname = agent[1]; 
           		 hotel[count].star = stoi(agent[2]);
           		 hotel[count].singlroom = stoi(agent[3]);   
	   		 hotel[count].singl_price = stoi(agent[4]);       
           		 hotel[count].twinroom = stoi(agent[5]);
           		 hotel[count].twin_price = stoi(agent[6]);  
          		 hotel[count].tripleroom = stoi(agent[7]); 
           		 hotel[count].triple_price = stoi(agent[8]);
           		 hotel[count].quad_room = stoi(agent[9]); 
           		 hotel[count].quad_price = stoi(agent[10]);
	   		 hotel[count].spa = stoi(agent[11]); 
           		 hotel[count].gym = stoi(agent[12]); 
           		 hotel[count].wifi = stoi(agent[13]); 
           		 hotel[count].parking = stoi(agent[14]); 
            
           		 i = 0;
           		 count++;
            	}
	}
booklist.close();
 
	
cout << "| 0.Search | 1.City | 2.Star rating | 3.Room quantity | 4.Price | 5.Spa | 6.Gym | 7.Wi-Fi | 8.Parking |" << endl;
bool a = true;
bool b1 [8];  
	for(int i = 0; i < 8; i++) {
		b1[i] = false; 
	}
string city1;
int star1;
int room1;
int price_min1;
int price_max1;
bool spa1;
bool gym1;
bool wi_fi1;
bool parking1;

while (a){
int choise;
cout << endl << " Filter by --> ";
cin >> choise;                                       
	switch (choise){
		case 0:
			a = false;
		break;
		
		case 1:
			cout << "Destinatin/property name: ";
			cin.ignore();
			getline(cin, city1);
			b1[0] = true;
	        break;

		case 2:
			cout << "Enter star rating: ";
			cin >> star1;
			b1[1] = true;
		break;

		case 3:
			cout << "Room quantity: ";
			cin >> room1;
			b1[2] = true;
		break;
		
		case 4:
			cout << "MIN price: ";
			cin >> price_min1;
			cout << "MAX price: ";
			cin >> price_max1;
			b1[3] = true;
		break;

		case 5:
			cout << "Do you want SPA? (0/1) ";
			cin >> spa1;
			b1[4] = true;
		break;

		case 6:
			cout << "Do you want Gym? (0/1) ";
			cin >> gym1;
			b1[5] = true;
		break;
	
		case 7:
			cout << "Do you need Wi-Fi (0/1) ";
			cin >> wi_fi1;
			b1[6] = true;
		break;

        	case 8:
			cout << "Do you need parking (0/1) ";
			cin >> parking1;
			b1[7] = true;
		break;
	}
   } 
	if(b1[3] && !(b1[2])) {
		cout << "	 How many rooms do you want? 	"<< endl;
		return 0;
	}
 for (int k = 0; k < rows; k++) {
	if(b1[0] && city1 != hotel[k].city){
	continue; 	
	}
 	if(b1[1] && star1 != hotel[k].star){
	continue;
	}
	if(b1[4] && spa1 != hotel[k].spa){
	continue; 	
	}
 	if(b1[5] && gym1 != hotel[k].gym) {
	continue;
	}
	if(b1[6] && wi_fi1 != hotel[k].wifi){
	continue; 	
	}
 	if(b1[7] && parking1 != hotel[k].parking){
	continue;
	}
	if(room1 == 1){                                       
		if(hotel[k].singlroom <= 0){
		continue;
		}

		if (b1[3] && ( hotel[k].singl_price < price_min1 || hotel[k].singl_price > price_max1)){
		continue; 
		}
		cout << k <<" --> "<< hotel[k].city << " "<< hotel[k].hotelname << " "<< hotel[k].star << "-Star " <<  hotel[k].singl_price << "-Dram" << " SPA";
		cout <<  plus_minus( hotel[k].spa) << " GYM" << plus_minus(hotel[k].gym) << " Wi-Fi" << plus_minus(hotel[k].wifi) << " Parking" << plus_minus(hotel[k].parking) << endl;
		continue;
		}
	else if(room1 == 2) {                                       
		if(hotel[k].twinroom <= 0){
		continue;
		}

		if (b1[3] && ( hotel[k].twin_price < price_min1 || hotel[k].twin_price > price_max1)){
		continue; 
		}

		cout << k <<" --> "<< hotel[k].city << " "<< hotel[k].hotelname << " "<< hotel[k].star << "-Star " <<  hotel[k].twin_price << "-Dram" << " SPA";
		cout <<  plus_minus( hotel[k].spa) << " GYM" << plus_minus(hotel[k].gym) << " Wi-Fi" << plus_minus(hotel[k].wifi) << " Parking" << plus_minus(hotel[k].parking) << endl;
		continue;

	}

	else if(room1 == 3) {                                       
		if(hotel[k].tripleroom <= 0){
		continue; 
		}
		if(b1[3] && ( hotel[k].triple_price < price_min1 || hotel[k].triple_price > price_max1)){
		continue; 
		}
		cout << k <<" --> "<< hotel[k].city << " "<< hotel[k].hotelname << " "<< hotel[k].star << "-Star " <<  hotel[k].triple_price << "-Dram" << " SPA";
		cout <<  plus_minus( hotel[k].spa) << " GYM" << plus_minus(hotel[k].gym) << " Wi-Fi" << plus_minus(hotel[k].wifi) << " Parking" << plus_minus(hotel[k].parking) << endl;
		continue;
	}

	else if(room1 == 4) {                                       
	
		if(hotel[k].quad_room <= 0){
		continue;
		}
		if(b1[3] && ( hotel[k].quad_price < price_min1 || hotel[k].quad_price > price_max1)){
		continue; 
		}
		cout << k <<" --> "<< hotel[k].city << " "<< hotel[k].hotelname << " "<< hotel[k].star << "-Star " <<  hotel[k].quad_price << "-Dram" << " SPA";
		cout <<  plus_minus( hotel[k].spa) << " GYM" << plus_minus(hotel[k].gym) << " Wi-Fi" << plus_minus(hotel[k].wifi) << " Parking" << plus_minus(hotel[k].parking) << endl;
	  	continue;
	}
	 if(b1[2]) {

		cout << " We havn't such room " << endl;
		break;
	}
		cout << k <<" --> "<< hotel[k].city << " "<< hotel[k].hotelname << " "<< hotel[k].star << "-Star "  << " SPA";
		cout <<  plus_minus( hotel[k].spa) << " GYM" << plus_minus(hotel[k].gym) << " Wi-Fi" << plus_minus(hotel[k].wifi) << " Parking" << plus_minus(hotel[k].parking) << endl;
      	
cout << endl <<"For checking-in enter number of that line" << endl;
int index;
cin >> index;
		
if(!b1[2]){	
	cout << "You don't enter you room type" << endl;
	cin >> room1;
	}
if(room1 == 1) {
	hotel[index].singlroom--;		
	cout << "You have successfuly check-in " << hotel[index].hotelname << endl; 
	}
	else if(room1 == 2) {

	hotel[index].twinroom--;
	cout << "You have successfuly check-in " << hotel[index].hotelname  << endl;
	}

	else if(room1 == 3) {

	hotel[index].tripleroom--;
	cout << "You have successfuly checking-in " << hotel[index].hotelname << endl;
	}

	else if(room1 == 4) {

	hotel[index].quad_room--;
	cout << "You have successfuly checking-in " << hotel[index].hotelname << endl;
	}

   }
	return 0;

}
}
 
