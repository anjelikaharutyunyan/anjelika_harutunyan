#include <iostream>
#include <fstream>

using namespace std;

int main(){

	string city;
	string hotelname;
	int star;
	int singlroom;
	int twinroom;
	int tripleroom;
	bool spa;
	bool gym;
	bool parking;



	fstream booklist;
	booklist.open("boking.txt");
	string agent[9] = "";
	
	while(!booklist.eof()){

	
	cout << "Choose the city: ";
	cin >> city;

	cout << "Enter hotel name: ";
	cin >> hotelname;

	cout << "Enter star rate (1-5): ";
	cin >> star;

	cout << "Enter singl Room: ";
	cin >> singlroom;

	cout << "Enter twin Room: ";
	cin >> twinroom;

	cout << "Enter triple Room: ";
	cin >> tripleroom;
	
	cout << "Enter existing of spa (0/1) : ";
	cin >> spa;
	
	cout << "Enter existing of gym (0/1): ";
	cin >> gym;

	cout << "Enter existing of parking (0/1): ";
	cin >> parking;

	i}

	booklist.close();

/*	string booking = city + " " + to_string(hotelname) + " " + to_string(star) + " " + to_string(singlroom) + " " + to_string(twinroom) + " " + to_string(tripleroom) + " " + to_string(spa) + " " + to_string(gym) + " " + to_string(parking);
*/
return 0;
}
