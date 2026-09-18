#include <iostream>

using namespace std;

int X, Y;
int num[7];

void make_num(int x){
    int i=0;
    while(x>0){
        num[i] = x%10;
        x /=10;
        i++;
    }
}

bool check(){
    int index = 7;
    for(int j=0; j<7; j++){
        if(num[j]==-1) {
            index = j;
            break;
        }
    } 

    for(int i=0; i<index/2; i++){
        if(num[i] != num[index-1-i]) return false;
    }

    return true;
}

int main() {
    cin >> X >> Y;

    int answer =0;
    for(int i=X; i<=Y; i++){
        for(int j=0; j<7; j++) num[j] = -1;

        make_num(i);

        if(check()) answer++;
    }

    cout << answer;
    return 0;
}