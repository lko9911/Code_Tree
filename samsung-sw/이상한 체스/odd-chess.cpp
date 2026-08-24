#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
int board[8][8];
int answer = 100;

struct piece{
    int x;
    int y;
    int type;
};

vector<piece> pieces;
vector<vector<int>> dirs[6];

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

void watch(int x, int y, int dir){
    int nx = x;
    int ny = y;

    while(1){
        nx += dx[dir];
        ny += dy[dir];

        if(nx<0 || nx>=n || ny <0 || ny >=m)
        break;

        if(board[nx][ny] == 6) break;

        if(board[nx][ny] >= 1 && board[nx][ny] <=5) continue;

        if(board[nx][ny] == 0) board[nx][ny] = -1;
    }
}

void dfs(int idx){
    if(idx == pieces.size()){
        int cnt=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j]==0) cnt++;
            }
        }

        answer = min(answer, cnt);
        return;
    }

    int x = pieces[idx].x;
    int y = pieces[idx].y;
    int type = pieces[idx].type;

    int backup[8][8];

    for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                backup[i][j] = board[i][j];
            }
        }

    for(auto directionSet : dirs[type]){
        for(int dir : directionSet){
            watch(x,y,dir);
        }

        dfs(idx + 1);

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            board[i][j] = backup[i][j];
    }


}

int main() {
    cin >> n >> m;

    dirs[1] = {
        {0},{1},{2},{3}
    };

    dirs[2] = {
        {0,2}, {1,3}
    };

    dirs[3] = {
        {0,1},{1,2},{2,3},{3,0}
    };

    dirs[4] = {
        {0,1,2},{1,2,3},{3,0,1},{2,3,0}
    };

    dirs[5] = {
        {0,1,2,3}
    };
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];

            if(board[i][j] >=1 && board[i][j] <=5){
                pieces.push_back({i,j,board[i][j]});
            }
        }
    }

    dfs(0);

    cout << answer;

    return 0;
}