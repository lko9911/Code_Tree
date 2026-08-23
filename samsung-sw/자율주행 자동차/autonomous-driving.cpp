#include <iostream>
using namespace std;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int n,m;
int x,y,dir;

int board[51][51];
bool visited[51][51];

int main() {
    cin >> n >> m;
    cin >> x >> y >> dir;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
        }
    }

    int cnt = 1;

    visited[x][y] = true;

    while(1){
        bool moved = false;

        for(int i=0; i<4; i++){
            dir = (dir + 3) % 4;

            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(board[nx][ny] == 0 && !visited[nx][ny]){

                x = nx;
                y = ny;

                visited[x][y] = true;
                cnt++;

                moved = true;

                break;
            }
        }
        if(moved) continue;

        int bx = x - dx[dir];
        int by = y - dy[dir];

        if(board[bx][by] == 1) break;

        x = bx;
        y = by;
    }

    cout << cnt;

    return 0;
}