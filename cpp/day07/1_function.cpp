#include <iostream>

using namespace std;
void sum_number (int first, int second){
    int *p, *q, sum;
    p = &first;
    q = &second;
    sum = *p + *q;
    cout <<"Sum of two numbers is " <<sum;
}

int main(){
    sum_number(3,5);
    
   return 0;
}
