#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int board[8][8];
int temp[8][8];

int answer = 0;

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void dfs(int x, int y){
    for(int dir=0; dir<4; dir++){

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx < 0 || nx >= n || ny <0 || ny >= m) continue;

        if(temp[nx][ny] == 0){
            temp[nx][ny] = 2;
            dfs(nx,ny);
        }
    }
}

void check(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            temp[i][j] = board[i][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(temp[i][j]==2)
                dfs(i,j);
        }
    }

    int cnt=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(temp[i][j]==0) cnt++;
        }
    }

    answer = max(answer, cnt);
}

void makeWall(int cnt){
    if(cnt == 3){
        check();
        return;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(board[i][j]==0){
                board[i][j] = 1;
                makeWall(cnt+1);
                board[i][j] = 0;
            }
        }
    }

}

int main() {
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
            }
        }
    
    makeWall(0);

    cout << answer;

    return 0;
}