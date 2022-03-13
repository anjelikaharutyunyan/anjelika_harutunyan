#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    const char *str = "BBuble BBIG bbug blue BomB BBib";
    int count = 0, B = 0;
    for (int i = 0; str[i] != strlen(str) ; i++){
        if ( str[i] == 'B'){
               count++;
              
        }
        if((str[i + 1] == ' ' || str[i + 1] == '\0') && count == 2){
           ++B;
           count = 0;
        }
    }
        cout << B;
    return 0;
}

