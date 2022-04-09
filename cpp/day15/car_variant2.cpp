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


	ifstream file;
	file.open("car.txt");
	int i = 0, count = 0;

	while(!file.eof()){

	file >> str;

	car_arr[i] = str;

	
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
	i++;

	}

	file.close();
	string command;

	cout << "Enter 'list' to see all cars,  'search' to search car: " << endl;
	getline(cin,command);


cout << "Search modes: 0 - show, 1 - brand, 2 - model, 3 - min-price, 4 - max-price, 5 - min-mileage, 6 - max-mileage, 7 - transmission, 8 - color, 9 - engine power\n";
bool 	command = true,
	brand_ = false, 
	model_ = false, 
	min_price_ = false,
	max_price_ = false, 
	min_mileage_ = false, 
	max_mileage_ = false, 
	transm_ = false,
	color_ = false,
	power_ = false; 

string mark, model, color, transm_box;
int min_price, max_price, min_mileage, max_mileage;
double power;
while(command) {
	int mode;
	cout << " Input search mode: ";
	cin >> mode;
	cin.ignore();
	switch (mode) {
		case 0:
		condition = false;
		break;

		case 1:
		cout << " Brand: ";
		getline(cin, brand);
		brand_ = true;
		break;

		case 2:
		cout << " Model: ";
		getline(cin, model);
		model_ = true;

		case 3:
		cout << " Min price: ";
		cin >> min_price;
		min_price_ = true;
		break;

		case 4:
		cout << " Max price: ";
		cin >> max_price;
		max_price_ = true;
		break;

		case 5:
		cout << " Min mileage: "; 		
		cin >> min_mileage;
		min_mileage_ = true;
		break;

		case 6:
		cout << " Max mileage: ";
		cin >> max_mileage;
		max_mileage_ = true;
		break;

		case 7:
		cout << " Transmission: ";
		cin >> transm;
		transm_ = true;
		break;

		case 8:
		cout << " Color: ";
		cin >> color;
		color_ = true;
		break;

		case 9:
		cout << " Engine power: ";
		cin >> power; 
		power_ = true;
		break;
	}
}
for ( int i = 0; i < row; i++) {
	if (brand_ && brand != info[i].brand) continue;
	if (model_ && model != info[i].model) continue;
	if (min_price_ && min_price > info[i].price) continue;
	if (max_price_ && max_price < info[i].price) continue;
	if (min_mileage && min_mileage < info[i].mileage) continue;
	if (max_mileage_ && max_mileage > info[i].mileage) continue;
	if (transm_ && transm != info[i].transmission) continue;
	if (color_ && color != info[i].color) continue;
	if (power_ && power != info[i].power) continue;
	print(info[i]);
}
return 0;
}
void print( information info){
	cout << "================================================================\n";
	cout << " Brand:        " << info.brand << endl;
	cout << " Model:        " << info.model << endl;
	cout << " Price:        " << info.price << " $\n";
	cout << " Mileage:      " << info.mileage << " km\n";
	cout << " Engine power: " << info.power << " L\n";
	cout << " Transmission: " << info.transmission << endl;
	cout << " Color:        " << info.color << endl;
}
