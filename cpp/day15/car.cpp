#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;


struct carInfo {
	string mark;
	string model;
	int maxPrice;
	int minPrice;
	int mileage;
	string trans_box;
	string color;
};

	void print(carInfo);
	int line();


int main(){
	
	struct carInfo info[7];
	string str = "";
	string car_arr[7];
	ifstream file("cars.txt");
	int i = 0, count = 0;

	while(!file.eof()){

	file >> str;
	car_arr[i] = str;

	i++;

	if(i == 6){

	info[count].mark = car_arr[0];
	info[count].model = car_arr[1];
	info[count].minPrice = stoi(car_arr[2]);
	info[count].maxPrice = stoi(car_arr[3]);
	info[count].mileage = stoi(car_arr[4]);
	info[count].trans_box = car_arr[5];
	info[count].color = car_arr[6];
	i = -1;
	count++;

	}


	}

	file.close();
	string command;

	cout << "Enter 'list' to see all cars,  'search' to search car: " << endl;
	getline(cin,command);

	if( command == "list"){

	for(int i = 0; i < line(); i++){
		
		cout << info[i].mark << " ";
		if((i + 1) % 3 == 0 && i != 0){

		cout << endl;
	
		}

	}

	}

	if(command == "search"){

	string mark;
	int minPrice, maxPrice, filter;
	
	cout << "Enter filter count: ";
	cin >> filter;
	
	if(filter == 1){

	cout << "Enter car's mark: ";
	
	cin >> mark;


	for( int i = 0; i < line(); i++){

	if(mark == info[i].mark){
	
	print(info[i]);

	}

	}

	}
	else if ( filter == 2){

	cout << "Enter car's mark: ";
	cin >> mark;
	cout << "Enter the min price: ";
	cin.ignore();
	cin >> minPrice;

	for(int i = 0; i < line(); i++){
	
	if( (mark == info[i].mark) && (minPrice <= info[i].minPrice)){

	cout << endl;
	print(info[i]);
	
	}

	}
	
	}
	
	else if( filter == 3){

	cout << "Enter car's mark: ";
	cin >> mark;
	cout << "Enter the min price: ";
	cin.ignore();
	cin >> minPrice;
	cout << "Enter the max price: ";
	cin >> maxPrice;

	for(int i = 0; i < line(); i++){
	
	if((mark == info[i].mark) && (minPrice <= info[i].minPrice) && (maxPrice >= info[i].maxPrice )){

	cout << endl;
	print(info[i]);

	}

	}

	}
	else {

	cout << "Input in range [1-3]:  ";
	return 0;
	}

	}
	
	return 0;

	}

	int line(){

	int c = 0;
	string line_arr;
	ifstream pr_car("cars.txt");

	while(getline(pr_car,line_arr)){

	++c;

	}

	pr_car.close();
	
	return c;
	}

	void print(carInfo car){

	cout << "===============================" << endl;	
        cout << "Mark:      \t" << car.mark << endl;
	cout << "-------------------------------" << endl;
        cout << "Model:      \t" << car.model << endl;
	cout << "-------------------------------" << endl;
        cout << "Min Price:  \t" << car.minPrice << endl;
	cout << "-------------------------------" << endl;
        cout << "Max Price:  \t" << car.maxPrice << endl;
	cout << "-------------------------------" << endl;
        cout << "Mileage:    \t" <<  car.mileage << endl;
	cout << "-------------------------------" << endl;
        cout << "Trans_box:     \t" << car.trans_box << endl;
	cout << "-------------------------------" << endl;
        cout << "Color:      \t" << car.color << endl;
	cout << "===============================" << endl;
}




