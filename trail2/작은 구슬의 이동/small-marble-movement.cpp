#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int arr[51][51];
int dx[4] = {0,1,-1,0}, dy[4]= {-1,0,0,1};

bool check(int x, int y){
    return x>=0 && x<n && y<n && y>=0;
}

int direction(char c){
    if(c=='U') return 0;
    else if(c=='D') return 3;
    else if(c=='L') return 2;
    else return 1;
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++)  
        arr[i][j] = 0;
    }

    int dir = direction(d);
    int count = 0, nx, ny;

    while(count<t){
        nx = c - 1 + dx[dir], ny = r - 1 + dy[dir];
        if(!check(nx,ny)){
            dir = 3-dir;
        }else c = nx + 1, r = ny + 1;
        count++;
    }

    cout << r << " " << c;

    return 0;
}