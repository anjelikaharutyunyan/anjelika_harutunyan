#include <iostream>
#include <ctime>

using namespace std;
int main (int argc, char *argv [] ){

	time_t now = time(0);
	char *date_time = ctime(&now);
	//cout << ctime(&now);

	double  capital = atof(*(argv + 1));
	double percent =  atof(*(argv + 2)) / 12;
	int month = atoi(*(argv + 3));

	double difference = 0;
	double a = capital;

	for(int i = 1; i <= month; i++){
		
		capital = capital + capital * percent / 100;
		difference = capital - a;

		cout << ctime(&now);

		cout <<'\t' <<" Income per month " << difference ;

		cout  << '\t'<<" Current deposit " << capital; 		

			
		a = capital;
		cout << endl;
}






return 0;
}
