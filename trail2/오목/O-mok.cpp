#include <iostream>

using namespace std;

int board[19][19];
int ansX,ansY;
int dx[4] = {0,1,1,-1}, dy[4] = {1,0,1,1};

int check(int x, int y){
    int base = board[x][y];

    for(int dir=0; dir<4; dir++){

        int px = x - dx[dir];
        int py = y - dy[dir];

        if(px>=0 && px <19 && py >=0 && py<19) {
            if(board[px][py]==base)
            continue;
        }

        int cnt = 1;
        int nx = x;
        int ny = y;

        while(1){
            nx += dx[dir];
            ny += dy[dir];
            if(nx<0 || nx >=19 || ny <0 || ny>=19) break;
            if(board[nx][ny] != base) break;
            cnt++;
        }
        if(cnt==5){
        ansX = x + dx[dir] * 2;
        ansY = y + dy[dir] * 2;
        return base;
        } 
    }

    return 0;
}

int main() {
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++){
            if(!board[i][j])
                continue;
            
            int winner = check(i,j);

            if(winner){
                cout << winner << endl;
                cout << ansX+1 << " " << ansY+1 << endl;
                return 0;
            }
        }

    cout << 0;
    return 0;
}