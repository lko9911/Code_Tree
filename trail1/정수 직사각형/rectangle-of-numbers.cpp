#include <iostream>
using namespace std;

int main() {
    int n,m, cnt=1, arr[100][100];
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        arr[i][j] = cnt++;
        cout << arr[i][j] << " ";
        }

    cout << endl;
    }
    return 0;
}