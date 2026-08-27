#include <iostream>
#include <queue>
using namespace std;

int n, m;
int a[100][100];
int dx[4] = {-1,1,0,0}, dy[4] = {0,0,-1,1};

bool visited[100][100];

void bfs(){
    queue<pair <int,int>> q;
    q.push({0,0});
    visited[0][0] = true;

    while(!q.empty()){

        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int dir=0; dir<4; dir++){
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx < 0 || nx >=n || ny <0 || ny >=m) continue;
            if(visited[nx][ny]) continue;
            if(a[nx][ny]==0) continue;

            visited[nx][ny] = true;
            q.push({nx,ny});
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    bfs();

    cout << (visited[n-1][m-1] ? 1 : 0);

    return 0;
}
