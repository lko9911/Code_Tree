#include <iostream>

using namespace std;

int N, M;
int dx[4] = {-1,1,0,0}, dy[4] = {0,0,-1,1};

int board[101][101];

bool check(int x, int y){
    int cnt = 0;
    for(int dir = 0; dir < 4; dir++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx < 0 || nx >= N || ny < 0 || ny >=N) continue;
        if(board[nx][ny] == 1) cnt++;
    }

    if(cnt == 3) return true;
    else return false;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int r,c;
        cin >> r >> c; 
        board[r-1][c-1]  = 1;
        if(check(r-1,c-1)) cout << 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}