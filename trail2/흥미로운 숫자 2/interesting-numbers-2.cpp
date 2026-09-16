#include <iostream>

using namespace std;

int X, Y;
int num[7];

bool check(int n){
    for(int i=0; i<7; i++) num[i] = -1;

    int f=0;
    while(n>0){
        num[f] = n%10;
        f++;
        n /=10;
    }

    bool possible = true;
    int cnt = 0;
    for(int i=1; i<f; i++){
        if(num[0] != num[i]){
            cnt++;
        }
    }
    if(cnt==1) return true;

    if(cnt==f-1){
        for(int i=2; i<f; i++){
            if(num[1] != num[i]) return false;
        }
    return true;
    }

    return false;
}

int main() {
    cin >> X >> Y;

    int answer=0;
    for(int i=X; i<=Y; i++){
        if(check(i)) answer++;
    }

    cout << answer;
    return 0;
}