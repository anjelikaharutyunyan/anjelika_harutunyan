#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
int main(){
int n;
        cout << "Enter array's size : ";
        cin >> n;
    int arr [n];
    for ( int i=0; i < n; i++){
        arr[i] = rand()%100;
        cout << arr[i] << " ";

}
    cout <<  endl;
    int r;
    for (int i = 0; i < n/2; i++){
        r= arr[i];
        arr[i] = arr [(n - 1 - i)];
        arr [n - 1 - i] = r;
}
    for (int i=0; i < n; i++){
        cout << arr[i] << " ";
}

return 0;
}

