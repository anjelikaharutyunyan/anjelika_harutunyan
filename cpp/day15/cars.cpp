#include <iostream>
#include <fstream>
#include <string>

using namespace std;

	struct car{
	
	string mark;
	string model;
	int price;
	int mileage;
	double engine;
	string trans_box;
	string color;
	};

int main(){

	cout << "Enter parametres you want: " << endl;
	cout << " 1-search :  2-mark : 3-model: 4-price: 5-mileage: 6-engine :7-trans_box: 8-color";
	bool t = true;
	bool mark = false;
	bool model = false;
	bool price = false;
	bool mileage = false;
	bool engine = false;
	bool trans_box = false;
	bool color = false;


	int price_max, price_min;
	int mil_max, mil_min;
	double engine1;
	string color1,mark1,trans_box1,model1;


	while(t){

	int i;
	cout << endl << "Enter parametres: ";
	cin >> i;


	switch(i){
	
	case 1: t = false; break;
	
	case 2:
	cout << "Input mark -->";
	cin.ignore();
	getline(cin,mark1);
	mark = true;
	break;

	case 3:
	cout << "Input model -->";
	cin.ignore();
	getline(cin,model1);
	model = true;
	break;

	case 4:
	cout << "Input Min price -->";
	cin >> price_min;
	cout << "Input Max price -->";
	cin >> price_max;
	price = true;
	break;

	case 5:
	cout <<"Input Min mileage -->";
	cin >> mil_min;
	cout <<"Input Max mileage -->";
	cin >> mil_max;
	mileage = true;
	break;

	case 6: 
	cout << "Input engine -->";
	cin >> engine1;
	engine = true;
	break;

	case 7: 
	cout << "Input trans_box -->;
	cin.ignore();
	getline(cin,trans_box1);
	trans_box = true;
	break;

	case 8:
	cout << "Input color -->";
	cin.ignore();
	getline(cin,color1);
	color = true;
	break;

	}
	}

	ifstream file("car.txt");
	string mycar;
	int row = 0;
	while(getline(file,mycar)){
	
	row++;

	}
	file.close();
	struct car arr[row];
	
	ifstream car("car.txt");
	string mycar1 = "";
	string mycar2 = "";
	int count = 0; 
	int j = 0;
	string parameters[7];

		while(!car.eof()){
	
		car >> mycar1;
		parameters[j] = mycar1;
		j++;

		if( j == 7 ){

		arr[count].mark = parameters[0];
		arr[count].model = parameters[1];
		arr[count].price = stoi(parameters[2]);
		arr[count].mileage = stoi(parameters[3]);
		arr[count].engine = stod(parameters[4]);
		arr[count].trans_box = parameters[5];
		arr[count].color = parameters[6];

		j = 0;
		count = count + 1;

		}

		}

		car.close();

	for(int count = 0; count < row; count++){
	
		if(mark && mark1 != arr[count].mark ){
		continue;
		} 
		if(model && model1 != arr[count].model){
		continue;
		}
		if( price && (arr[count].price < price_max || arr[count].price > price_min )){
		continue;	
		}	
		if(mileage && (arr[count].mileage < mil_max || arr[count].mileage > mil_min)){
		continue;
		}		
		if(engine && engine1 != arr[count].engine){
		continue;
		}
		if(trans_box && trans_box1 != arr[count].trans_box){
		continue;
		}
		if(color && color1 != arr[count].color){
		continue;
		}


		cout << arr[count].mark << "  " << arr[count].model << "  " << arr[count].price << "  " <<arr[count].mileage << "  " 
			<< arr[count].engine << "  " << arr[count].trans_box << "  " << arr[count].color ;
	




	}












return 0;
}
