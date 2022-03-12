#include <iostream>

using namespace std;

int main()
{
    int n, m = 1;
    cin >> n;
    int arr[n][n];
    
    if(n % 2 != 0){
        arr[(n / 2)][(n / 2)] = (n * n);
    }
    
    for(int i = 0; i < (n / 2); i++){
        for(int j = i; j < (n - i); j++){
            arr[i][j] = m;
            m++;
        }
        for( int j = 1; j < (n - i - i); j++){
            arr[(j + i)][(n - i) - 1] = m;
            m++;
        }
        for( int j = (n - 2) - i; j >= i; j--){
            arr[(n - i) - 1][(j)] = m;
            m++;
        }
        for(int j = ((n - i) - 2); j > i; j--){
            arr[j][i] = m;
            m++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int  j = 0; j < n - 1; j++){
            cout << arr[i][j] << " ";
        }
        cout << arr[i][n - 1] << endl;
    }
    
    return 0;
}
