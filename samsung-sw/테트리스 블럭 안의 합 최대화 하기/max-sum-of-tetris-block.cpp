#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int board[200][200];
bool visited[200][200];

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int answer = 0;

void dfs(int x, int y, int depth, int sum){

    if(depth == 4){
        answer = max(answer, sum);
        return;
    }

    for(int dir=0; dir<4; dir++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx < 0 || nx >=n || ny < 0 || ny >=m) continue;

        if(visited[nx][ny]) continue;

        if(depth == 2){
            visited[nx][ny] = true;

            dfs(x,y,depth +1, sum + board[nx][ny]);

            visited[nx][ny] = false;
        }

        visited[nx][ny] = true;

        dfs(nx,ny,depth+1, sum + board[nx][ny]);

        visited[nx][ny] = false;
    }
}


int main() {
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        cin >> board[i][j];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        visited[i][j] = true;
        dfs(i,j,1,board[i][j]);
        visited[i][j] = false;
        }
    }

    cout << answer;
    return 0;
}