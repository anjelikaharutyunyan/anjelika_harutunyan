#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;
 
double deposit (double principal_amount, double interest_rate);
 
int main (int argc, char* argv[]) 
{
 
        time_t now = time(0);
        char* date_time = ctime(&now);
        string date[5];
        int x = 0;
        for (int i = 0; date_time[i] != '\0'; i++) 
	{
                if (date_time[i] == ' ') 
		{
                        x++;
                        continue;    
                }
                date[x] += date_time[i];
        }
 
        int day = stoi(date[2]);
        int year = stoi(date[4]);
        int m;
        string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        for (int i = 0; i < 12; i++) 
	{
                if (months[i] == date[1]) 
		{
                        m = i;
                }
        }
        double capital = atof(argv[1]);
        double percent = atof(argv[2]);  
       	int  month = atof(argv[3]);
	double monthly_income;
        cout << "Principal amount: " << capital << " amd " <<  endl;
        for(int i = 0; i < atoi(argv[3]); i++) 
	{
                monthly_income = deposit (capital, percent);
                capital += monthly_income;
                cout << m + 2 << "/" << day << "/" << year << "| " << capital << "amd | " << monthly_income << endl;
                m++;
                if (m == 12) 
		{
                        year++;
                        m = 0;
                }
        }
 
        return 0;
}
 
double deposit (double capital, double percent) 
{
 
        return capital * ((percent  / 100) / 12);
}
