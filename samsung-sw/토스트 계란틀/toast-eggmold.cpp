#include <iostream>
#include <vector>
using namespace std;

int n,l,r;
int egg[50][50];
int visited[50][50];

int dx[4] = {-1,1,0,0}, dy[4] = {0,0,1,-1};

vector<pair<int,int>> group;
int sum;

void dfs(int x, int y){
    visited[x][y] = true;
    group.push_back({x,y});
    sum += egg[x][y];

    for(int dir=0; dir < 4; dir++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx < 0 || nx >=n || ny < 0 || ny >= n) continue;
        if(visited[nx][ny]) continue;
        int diff = abs(egg[x][y] - egg[nx][ny]);
        if(diff < l || diff > r) continue;

        dfs(nx,ny);
    }
}

int main() {
    cin >>  n >> l >> r;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        cin >> egg[i][j];
    }

    int answer = 0;

    while(1){
    bool move = false;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        visited[i][j] = false;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        if(visited[i][j]) continue;
        group.clear();
        sum = 0;

        dfs(i,j);

        if(group.size() >= 2){
            move = true;

            int avg = sum / group.size();
            for(auto cell : group){
                int x = cell.first;
                int y = cell.second;

                egg[x][y] = avg;
            }
        }
        }
    }

    if(!move) break;

    answer++;
    }

    cout << answer;
    return 0;
}