#include <iostream>
using namespace std;

int arr[100][100];
int n,m;
int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
int dir=1;

bool check(int x, int y){
    return x < m && x >= 0 && y < n && y >= 0;
}

int main() {
    cin >> n >> m;

    int x=0, y=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = 0;
        }
    }

    int cnt=2;
    int f = n*m-1;
    arr[0][0]=1;

    while(f--){
        int nx = x + dx[dir], ny = y + dy[dir];

        if(!check(nx,ny) || arr[ny][nx]!=0){
            dir = (dir+3)%4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        } 
        x = nx, y = ny;

        arr[y][x] = cnt++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}