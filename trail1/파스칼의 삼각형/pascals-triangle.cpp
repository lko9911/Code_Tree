#include <iostream>
using namespace std;

int main() {
    int n, arr[15][15];
    cin >> n;

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        arr[i][j]=1;

    for(int i=2; i<n; i++)
        for(int j=1; j<i; j++)
        arr[i][j] = arr[i-1][j-1] + arr[i-1][j];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        if(j<=i)
        cout << arr[i][j] << " ";
    cout << endl;
    }
    return 0;
}