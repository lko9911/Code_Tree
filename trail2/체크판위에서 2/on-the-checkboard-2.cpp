#include <iostream>
using namespace std;

char arr[15][15];

int main() {
    int r,c;
    cin >> r >> c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }

    int cnt=0;
    for(int r1=1; r1<r-1; r1++){
        for(int c1=1; c1<c-1; c1++){
            for(int r2=r1+1; r2<r-1; r2++){
                for(int c2=c1+1; c2<c-1; c2++)
                    if(arr[0][0]!=arr[r1][c1] && arr[r1][c1] != arr[r2][c2] && arr[r2][c2] != arr[r-1][c-1]) cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}