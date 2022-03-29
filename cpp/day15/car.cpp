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

int main(){
	
	struct carInfo info[6];

	ifstream MyCarFile;
	MyCarFile.open("car.txt");
	MyCarFile.close();

	string str = "";
	string  car[6];
	int count = 0, i = 0;

	while(!MyCarFile.eof()){
	MyCarFile >> str;
	car[i] = str;

	if(i == 6){
	info[count].mark = car[0];
	info[count].model = car[1];
	info[count].minPrice = stoi(car[2]);
	info[count].maxPrice = stoi(car[3]);
	info[count].mileage = stoi(car[4]);
	info[count].trans_box = car[5];
	info[count].color = car[6];

	count++;
	i = -1;
	}

	i++;

	}

	MyCarFile.close();

	string cars_model = "";
	string cars_color = "";
	cout << "Enter search mark: ";
	getline(cin,cars_model);
	cout << "Enter search car's color:";
	getline(cin,cars_color);

	if( cars_model == car[0] ){
		for( int i = 0; i < 6; i++){
			if(info[i].mark == cars_model){
		
			cout << "Mark : " << info[i].mark << endl;
			cout << "Model : " << info[i].model << endl;
			cout << "Min. Price : " << info[i].minPrice << endl;
			cout << "Max. Price : " << info[i].maxPrice << endl;
			cout << "Mileage : " << info[i].mileage << endl;
			cout << "Trans_Box : " << info[i].trans_box << endl;
			cout << "Color : " << info[i].color << endl;

}
}	
}
			else if (cars_color == car[6]){

			for( int i = 0; i < 6; i++){

				if(info[i].color == cars_color){
				
			cout << "Mark : " << info[i].mark << endl;
			cout << "Model : " << info[i].model << endl;
			cout << "Min. Price : " << info[i].minPrice << endl;
			cout << "Max. Price : " << info[i].maxPrice << endl;
			cout << "Mileage : " << info[i].mileage << endl;
			cout << "Trans_Box : " << info[i].trans_box << endl;
			cout << "Color : " << info[i].color << endl;

}
	
}
		








}
return 0;
}
