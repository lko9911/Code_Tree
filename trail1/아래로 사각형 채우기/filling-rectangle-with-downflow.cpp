#include <iostream>
using namespace std;

int main() {
    int n, arr[10][10], cnt=1;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        arr[i][j] = cnt++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        cout << arr[j][i] << " ";
    cout << endl;
    }

    return 0;
}