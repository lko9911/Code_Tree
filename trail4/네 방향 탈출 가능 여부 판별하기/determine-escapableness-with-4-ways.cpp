#include <iostream>
#include <queue>
using namespace std;

int n, m;
int a[100][100];
int dx[4] = {-1,1,0,0}, dy[4] = {0,0,-1,1};

bool visited[100][100];

void dfs(int x, int y){
    visited[x][y] = true;
   
    for(int dir=0; dir<4; dir++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx < 0 || nx >=n || ny <0 || ny >=m) continue;
        if(visited[nx][ny]) continue;
        if(a[nx][ny]==0) continue;

        visited[nx][ny] = true;
        dfs(nx,ny);
    }
    
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    dfs(0,0);

    cout << (visited[n-1][m-1] ? 1 : 0);

    return 0;
}
