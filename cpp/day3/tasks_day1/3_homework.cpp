#include <iostream>

using namespace std;

int f ( int year ){
int  count=0;
while ( count != 20 ){
    
if  ( year % 4 == 0 && year % 100 != 0 ){
         count = count + 1;
        cout << year << "is leap year " << endl;
}
        year++;
       
}

return 0;
}


int main()
{

return f( 2020);

}
