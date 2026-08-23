#include <iostream>
using namespace std;

int dx[5] = {0,0,0,-1,1};
int dy[5] = {0,1,-1,0,0};
int dice[6];
int board[21][21];
int n,m,x,y,k;

void rollingE(){
    int temp = dice[0];

    dice[0] = dice[5];
    dice[5] = dice[1];
    dice[1] = dice[4];
    dice[4] = temp;
}

void rollingW(){
    int temp = dice[0];

    dice[0] = dice[4];
    dice[4] = dice[1];
    dice[1] = dice[5];
    dice[5] = temp;
}

void rollingS(){
    int temp = dice[0];

    dice[0] = dice[2];
    dice[2] = dice[1];
    dice[1] = dice[3];
    dice[3] = temp;
}

void rollingN(){
    int temp = dice[0];

    dice[0] = dice[3];
    dice[3] = dice[1];
    dice[1] = dice[2];
    dice[2] = temp;
}

int main() {
    cin >> n >> m >> x >> y >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
        }
    }

    for(int i=0; i<k; i++){
            int dir;
            cin >> dir;
            
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx < 0 || nx >=n || ny<0 || ny >=m)
            continue;

            x = nx; y =ny;

            if(dir == 1) rollingE();
            else if(dir == 2) rollingW();
            else if(dir == 3) rollingN();
            else rollingS();

            if(board[x][y] == 0){
                board[x][y] = dice[1];
            } else {
                dice[1] = board[x][y];
                board[x][y] = 0;
            }
            cout << dice[0] << endl;
    }


    return 0;
}