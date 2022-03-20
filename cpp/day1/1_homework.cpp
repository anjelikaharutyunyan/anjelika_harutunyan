#include <iostream>

using namespace std;

int main()
{
    int number,guess;
    cout << "Remember a number ";
    cin >> number;
    cout << "Try to guess remembered number ";
   
    do{  
        cin >> guess;
        if(guess > number ){
            cout << "It's greater than remembered number ";
        }
        else if ( guess < number){
            cout << "It's little than remembered number ";
        }
        else if( guess == number) {
            cout << "It's wright!";
        }
    }
    while(guess != number);
    
    return 0;
}

