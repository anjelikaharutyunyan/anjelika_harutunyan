#include <iostream>
#include <ctime>

using namespace std;
int main(){

        long int second;
        cout << "Enter seconds: ";
        cin >> second;

        time_t dt  = second;
        string date = ctime(&dt);
	string week = "";
        string day = "";
        string month = "";
        string year = "";
        string time = "";

        for(int i = 0; date[i] != '\0'; i++){
        
		if ( i >= 0 && i <=3){
			week = week + date[i];
} 

	       if ( i >= 3 && i <= 6  ){
                        day = day + date[i];
 }
          	  if( i >= 7 && i <= 9 ){
                        month = month + date[i];
}
                if( i >= 10 && i <= 15){
                        time = time + date[i];
}
                  if(i >= 17 && i <= 20){
                        year = year + date[i];
}
}

                cout << "Unix time: " << week << " " << day << " " << month << " " << time << " " << year ;



        return 0;
}

