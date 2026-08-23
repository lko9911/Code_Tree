#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
char board[11][11];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int answer = INT_MAX;
vector<int> best;

void moveCandy(int &x, int &y, int dir, int &moveCnt, bool &hole){

    while(1){
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(board[nx][ny]=='#')
            break;

        x = nx;
        y = ny;
        moveCnt++;

        if(board[x][y]=='O'){
            hole = true;
            break;
        }
    }
}

int getState(int rx, int ry, int bx, int by){
    
    int redPos = rx * M + ry;
    int bluePos = bx * M + by;

    return redPos * (N * M) + bluePos;
}

// 백트래킹
void dfs(int rx,int ry, int bx, int by, int cnt){
    if(cnt >= answer)
        return;
    
    if(cnt >= 10) return;

    int state = getState(rx,ry,bx,by);

    if(best[state] <= cnt)
    return;


    best[state] = cnt;

    for(int dir=0; dir<4; dir++){
        int rr = rx;
        int rc = ry;

        int br = bx;
        int bc = by;

        int redMove = 0;
        int blueMove = 0;

        bool redhole = false;
        bool bluehole = false;

        moveCandy(rr,rc,dir,redMove,redhole);
        moveCandy(br,bc,dir,blueMove,bluehole);

        if(bluehole)
            continue;
        
        if(redhole){
            answer = min(answer, cnt+1);
            continue;
        }

        if(rr == br && rc == bc){
            if(redMove > blueMove){
                rr -= dx[dir];
                rc -= dy[dir];
            }
            else {
                br -= dx[dir];
                bc -= dy[dir];
            }
        }
        if(rr == rx && rc == ry && br == bx && bc == by)
        continue;

        dfs(rr,rc,br,bc,cnt+1);
    }
}



int main() {
    cin >> N >> M;

    int rx,ry,bx,by;

    for(int i=0; i<N; i++){
        cin >> board[i];
        for(int j=0; j<M; j++){
            if(board[i][j] == 'R'){
                rx = i;
                ry = j;

                board[i][j] = '.';
            }
            else if(board[i][j] == 'B'){
                bx = i;
                by = j;

                board[i][j] = '.';
            }
        }
    }

    int totalStates = (N * M) * (N * M);
    best.assign(totalStates, INT_MAX);

    dfs(rx,ry,bx,by,0);

    if(answer == INT_MAX) cout << -1;
    else cout << answer;

    return 0;
}