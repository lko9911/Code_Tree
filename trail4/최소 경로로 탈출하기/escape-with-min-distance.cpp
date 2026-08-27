#include <iostream>
#include <queue>
using namespace std;

int n, m;
int a[100][100];
bool visited[100][100];

int dx[4] = {-1,1,0,0}, dy[4] = {0,0,1,-1};
int dist[100][100];

void bfs(){
    queue<pair <int,int>> q;
    q.push({0,0});
    visited[0][0] = true;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int dir = 0; dir<4; dir++){
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx < 0 || nx >=n || ny <0 || ny >=m) continue;
            if(a[nx][ny] == 0) continue;
            if(visited[nx][ny]) continue;

            visited[nx][ny] = true;

            dist[nx][ny] = dist[x][y] + 1;

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

    if(visited[n-1][m-1])
        cout << dist[n-1][m-1];
        else cout << -1;

    return 0;
}
