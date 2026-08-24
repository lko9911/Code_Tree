#include <iostream>
#include <string>
using namespace std;

int chair[4][8];

void rotateChair(int idx, int dir){
    if(dir==1){
    int temp = chair[idx][7];

    for(int i=7; i>=1; i--){
        chair[idx][i] = chair[idx][i-1];
    }
    chair[idx][0] = temp;
    } else if(dir==-1){
        int temp = chair[idx][0];

    for(int i=0; i<7; i++){
        chair[idx][i] = chair[idx][i+1];
    }
    chair[idx][7] = temp;
    }
}

int main() {
    
    for(int i=0; i<4; i++){
        string s;
        cin >> s;
        for(int j=0; j<8; j++){
            chair[i][j] = s[j] - '0';
        }
    }

    int k;
    cin >> k;

    while(k--){
        int num, dirc;
        cin >> num >> dirc;

        num--;

        int dir[4] = {0,0,0,0};

        dir[num] = dirc;

        for(int i = num - 1; i>=0; i--){
            if(chair[i][2] != chair[i+1][6]){
                dir[i] = -dir[i+1];
            } else break;
        }

        for(int i = num + 1; i<4; i++){
            if(chair[i][6] != chair[i-1][2]){
                dir[i] = -dir[i-1];
            } else break;
        }
        for(int i = 0; i<4; i++){
            if(dir[i] != 0){
                rotateChair(i, dir[i]);
            }
        }
    }

    int answer = 0;
    int score[4] = {1,2,4,8};

    for(int i=0; i<4; i++)
        if(chair[i][0]==1) answer += score[i] * chair[i][0];

    cout << answer;

    return 0;
}