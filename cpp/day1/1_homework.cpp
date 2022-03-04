#include <iostream>
using namespace std;

int main(){
        int x, a;
        cout << "mtapahel tiv ";
        cin >> a;

do {
        cout << "mutqagrel mtapahvac tivy ";
        cin >> x;
if ( x > a )            cout << "tivy mec e mtapahvac tvic, pordzel krkin";
else if ( x < a )       cout << "tivy poqr e mtapahvac tvic, pordzel krknin";
else if( x==a )          cout << "duq jisht eq gushakel tivy";
}

while( x!=a );

return 0;
}
