#include <iostream>
using namespace std;

int main() {
    int n, m, arr[100][100], cnt=1;
    cin >> n >> m;

    for(int k=0; k<n+m-1; k++){
        for(int i=0; i<=k; i++){
            int j=k-i;
            if(j<m && i<n){
            arr[i][j] = cnt++;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
      }
      cout << endl;
    }

    return 0;
}