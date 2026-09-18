#include <iostream>

using namespace std;

int T, a, b;
char c[100];
int x[100];
char board[1001];

int ds(int x){
    int cntp=0, cntn=0;
    while(1){
        if(board[x]=='S') return 0;
        
        cntp++;
        cntn--;
        if(x + cntp <=1000 && board[x+cntp] == 'S'){
            return cntp;
        } 
        if(x + cntn <=1000 && board[x+cntn] == 'S'){
            return -cntn;
        } 
    }
}

int dn(int x){
    int cntp=0, cntn=0;
    while(1){
        if(board[x]=='N') return 0;
        cntp++;
        cntn--;
        if(x + cntp <=1000 && board[x+cntp] == 'N'){
            return cntp;
        } 
        if(x + cntn <=1000 && board[x+cntn] == 'N'){
            return -cntn;
        } 
    }
}

int main() {
    cin >> T >> a >> b;

    for (int i = 0; i < T; i++) {
        cin >> c[i] >> x[i];
        board[x[i]] = c[i];
    }

    int answer = 0;
    for (int i = a; i <= b; i++) {
        int d1 = ds(i);
        int d2 = dn(i);
        if(d1 <= d2) answer++;
    }

    cout << answer;

    return 0;
}