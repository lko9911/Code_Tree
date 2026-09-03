#include <iostream>

using namespace std;

int n;
char grid[1000][1000];
int k;

int dx[4] = {-1,0,1,0}, dy[4] = {0,1,0,-1};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;

    int x,y,dir;

    if(k<=n){
        x = 0;
        y = k-1;
        dir = 2;
    } else if(k<=2*n){
        x = k-n-1;
        y = n-1;
        dir = 3;
    } else if(k<=3*n){
        x = n-1;
        y = 3*n-k;
        dir = 0;
    } else{
        x = 4*n-k;
        y = 0;
        dir = 1;
    }

    int cnt = 0;

    while(x >= 0 && x < n && y >=0 && y <  n){
    
    if(grid[x][y] == '/'){
        dir ^= 1;
    } else{
        dir ^=3;
    }

    cnt++;

    x +=dx[dir];
    y +=dy[dir];
    
    }
    cout << cnt << endl;

    return 0;
}