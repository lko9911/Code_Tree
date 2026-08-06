#include <iostream>
using namespace std;

int main() {
    int n,m, arr[9][9]={};
    cin >> n >> m;

    while(m--){
        int r,c;
        cin >> r >> c;
        arr[r-1][c-1] =r*c;
        }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
      cout << arr[i][j] << " ";
    cout << endl;
   }

    return 0;
}