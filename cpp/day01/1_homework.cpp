#include <iostream>

using namespace std;

int main()
{
    int number, guess;
    cout << "Remember a number ";
    cin >> number;
    cout << "Try to guess remembered number \n";

   
    do{  
        cin >> guess;
        if(guess > number){
            cout << "It's greater than remembered number \n";
        }
        else if (guess < number){
            cout << "It's little than remembered number \n";
        }
        else if( guess == number) {
            cout << "It's right!";
        }
    }
    while(guess != number);
    
    return 0;
}

