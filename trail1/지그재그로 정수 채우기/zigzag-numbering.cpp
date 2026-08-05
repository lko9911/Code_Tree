#include <iostream>
using namespace std;

int main() {
    int n, m, arr[100][100], cnt=0;
    cin >> n >> m;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
        if(i%2==0) arr[j][i] = cnt++;
        else arr[n-j-1][i] = cnt++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cout << arr[i][j] << " ";
    cout << endl;
    }

    return 0;
}