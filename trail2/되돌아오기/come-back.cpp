#include <iostream>
using namespace std;

int x=1000, y=1000;

int arr[2000][2000];
int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

int direction(char c){
    if(c == 'W') return 2;
    else if(c=='S') return 3;
    else if(c=='N') return 1;
    else return 0; 
}

int main() {
    int n, time=0;
    cin >> n;

    int base_x = 1000, base_y=1000;
    bool flage = false;
    while(n--){
        char d;
        int num;
        cin >> d >> num;

        int dir = direction(d); 
        
        while(num--){
        int nx = x + dx[dir], ny = y + dy[dir];
        arr[nx][ny]=1;
        x = nx, y = ny;
        time ++;
        
        if(x == base_x && y == base_y) {
            flage = true;
            break;
            }
        }
        if(flage) break;

    }

    cout << (flage ? time : -1);

    return 0;
}