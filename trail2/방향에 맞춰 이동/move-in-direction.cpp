#include <iostream>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};

int main() {
    int n,x=0,y=0;
    char d;
    int dist;
    cin >> n;
    while(n--){
        cin >> d >> dist;
        if(d == 'N') {
            x += dx[3]*dist;
            y += dy[3]*dist;
        } else if(d == 'W') {
            x += dx[2]*dist;
            y += dy[2]*dist;
        } else if(d== 'S'){
            x += dx[1]*dist;
            y += dy[1]*dist;
        } else{
            x += dx[0]*dist;
            y += dy[0]*dist;
        }
    }
    cout << x << " " << y;
    return 0;
}