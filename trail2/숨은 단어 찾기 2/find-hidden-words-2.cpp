#include <iostream>
#include <string>

using namespace std;

int N, M;
string arr[50];

int dx[8] = {1,-1,0,0,1,-1,1,-1}, dy[8] = {0,0,1,-1,1,-1,-1,1};

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int answer = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(arr[i][j] == 'L'){
                for(int dir=0; dir<8; dir++){
                    int nx = i;
                    int ny = j;
                    int cnt=2;
                    bool can=true;
                    while(cnt--){
                        nx += dx[dir];
                        ny += dy[dir];
                        if(arr[nx][ny] != 'E'){
                            can = false;
                            break;
                        }
                        if(nx < 0 || nx >= N || ny < 0 || ny >= M){
                            can = false;
                            break;
                        }
                    }
                    if(can) answer++;
                }
            }
        }
    }

    cout << answer;
    return 0;
}