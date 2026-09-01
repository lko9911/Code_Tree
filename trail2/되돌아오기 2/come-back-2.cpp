#include <iostream>
#include <string>

using namespace std;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int x,y,dir;
string commands;

int main() {
    cin >> commands;

    int cnt=0;
    for(int i=0; i<commands.size(); i++){
        if(commands[i] == 'F'){
            x += dx[dir];
            y += dy[dir];
            cnt++;
        } else if(commands[i] == 'L'){
            dir = (dir+3) % 4;
            cnt++;
        } else if(commands[i]=='R'){
            dir = (dir+1) % 4;
            cnt++;
        }
        if(x == 0 && y == 0){
            cout << cnt;
            return 0;
        }
    }

    cout << -1;
    return 0;
}