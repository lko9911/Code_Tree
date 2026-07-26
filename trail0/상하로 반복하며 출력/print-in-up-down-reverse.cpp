#include <iostream>
using namespace std;

int main() {
    int n, arr[9][9], col[9];
    cin >> n;

    for(int i=1; i<=n; i++){
        col[i-1] = i;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0)
            arr[j][i] = col[j];
            else
            arr[j][i] = col[n-j-1];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}