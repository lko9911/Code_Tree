#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> selected;

bool visited[51][51];
int board[51][51];

vector<pair<int,int>> group_cells;

int n,l,r;

int dx[4] = {-1,0,1,0}, dy[4] = {0,1,0,-1};

void dfs(int x, int y){
    visited[x][y] = true;
    group_cells.push_back({x,y});

    for(int dir = 0; dir<4; dir++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx < 0 || nx >= n || ny < 0 || ny  >=n) continue;

        if(visited[nx][ny]) continue;

        if(abs(board[x][y] - board[nx][ny]) >= l && abs(board[x][y] - board[nx][ny]) <= r){
            dfs(nx,ny);
        }
    }
}

int main() {
    cin >> n >> l >> r;

    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> board[i][j];
        }
    }

    int cnt=0;

    while(1){
    bool move = false;

    for(int i=0; i<n; i++)
        for(int j = 0; j<n; j++)
            visited[i][j] = false;
        
    
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(visited[i][j]) continue;

            group_cells.clear();
            dfs(i,j);

            if(group_cells.size() >= 2) move = true;

            int total = 0;
            for(auto p : group_cells){
                int x = p.first;
                int y = p.second;
            total += board[x][y];
            }

            for(auto p : group_cells){
                int x = p.first;
                int y = p.second;
                board[x][y] = total/group_cells.size();
            }
        }
    }

    if(!move) break;
    cnt++;
    }
    
    cout << cnt;
    return 0;
}