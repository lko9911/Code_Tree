#include <iostream>
#include <vector>

using namespace std;

int board[101][101];
int n, m;

int dx[4] = {-1,0,1,0}, dy[4] = {0,1,0,-1};

int main() {
    cin >> n >> m;

    int cnt = 1;
    int dir = 2;

    int x=0,y=0;
    int p = n*m;

    while(p--){
        board[x][y] = cnt++;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx<0 || nx>=n || ny<0 || ny>=m || board[nx][ny]) {
            dir  = (dir + 3) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }    

    return 0;
}