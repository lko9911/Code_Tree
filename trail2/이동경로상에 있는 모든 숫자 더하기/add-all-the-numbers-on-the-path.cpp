#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];

int dx[4] = {-1,0,1,0}, dy[4] = {0,1,0,-1};

int main() {
    cin >> N >> T;
    cin >> str;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    int x = N/2;
    int y = N/2;
    int dir = 0;
    int total = board[x][y];

    for(int i=0; i<T; i++){
        if(str[i]=='R'){
            dir = (dir + 1)%4; 
        }else if(str[i] == 'L'){
            dir = (dir + 3)%4; 
        }else{
            x += dx[dir];
            y += dy[dir];
            if(x < 0 || x >=N || y < 0 || y>=N){
                x -=dx[dir];
                y -=dy[dir];
                continue;
            }
            total += board[x][y];
        }   
    }

    cout <<  total;

    return 0;
}