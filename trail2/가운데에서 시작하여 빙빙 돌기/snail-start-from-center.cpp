#include <iostream>

using namespace std;

int n;
int grid[100][100];
int dx[4] = {-1,0,1,0}, dy[4] = {0,-1,0,1};

int main() {
    cin >> n;
    int x = n/2;
    int y = n/2;
    int cnt = 1;

    grid[x][y] = 1;

    int len = 1;
    int dir = 3;
    while(cnt < n*n){
        for(int re = 0; re < 2 ; re++){
            for(int i=0; i<len; i++){
                x += dx[dir];
                y += dy[dir];
                cnt++;

                grid[x][y] = cnt;
            }
            dir = (dir + 1)%4;
        }
        len++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}
