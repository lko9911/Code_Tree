#include <iostream>
using namespace std;

int arr[101][101];
int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
int n;

bool check(int x, int y){
    return x < n && x > -1 && y < n && y > -1; 
}

int main() {
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int ans=0, x=0, y=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        int cnt=0;
        for(int dir=0; dir<4; dir++){
            x = i + dx[dir];
            y = j + dy[dir];

            if(check(x,y) && arr[x][y]==1) cnt++;
        }
        if(cnt >= 3) ans++;
    }
    }

    cout << ans;

    return 0;
}