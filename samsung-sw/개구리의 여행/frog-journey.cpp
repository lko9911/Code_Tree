#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <string>
using namespace std;

int n, q;

char board[51][51];

long long dist[51][51][6];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};


// 점프할 수 있는지 확인
bool canJump(int x, int y, int jump, int dir) {

    int nx, ny;

    // 점프하면서 지나가는 모든 칸 확인
    for(int step = 1; step <= jump; step++) {

        nx = x + dx[dir] * step;
        ny = y + dy[dir] * step;

        // 격자 밖이면 불가능
        if(nx < 1 || nx > n || ny < 1 || ny > n)
            return false;

        // #은 지나갈 수도 없음
        if(board[nx][ny] == '#')
            return false;
    }

    // 마지막 도착지가 S라면 착지 불가능
    if(board[nx][ny] == 'S')
        return false;

    return true;
}


// (x, y, jump)를 하나의 숫자로 바꾸기
int makeState(int x, int y, int jump) {

    int state;

    state = ((x - 1) * n + (y - 1)) * 5 + (jump - 1);

    return state;
}


// 다익스트라
long long dijkstra(int sx, int sy, int ex, int ey) {

    // dist 초기화
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= 5; k++) {
                dist[i][j][k] = 1000000000000000000LL;
            }
        }
    }


    // pair의
    // first  = 걸린 시간
    // second = 상태
    priority_queue<
        pair<long long, int>,
        vector<pair<long long, int>>,
        greater<pair<long long, int>>
    > pq;


    // 처음 점프력은 1
    dist[sx][sy][1] = 0;

    int startState = makeState(sx, sy, 1);

    pq.push({0, startState});


    while(!pq.empty()) {

        long long time = pq.top().first;
        int state = pq.top().second;

        pq.pop();


        // =========================
        // state를 x, y, jump로 복구
        // =========================

        int jump = state % 5 + 1;

        state = state / 5;

        int y = state % n + 1;
        int x = state / n + 1;


        // 이미 더 빠른 길이 있으면 무시
        if(time > dist[x][y][jump])
            continue;


        // 목적지 도착
        if(x == ex && y == ey)
            return time;


        // =====================================
        // 1. 현재 점프력으로 점프
        // =====================================

        for(int dir = 0; dir < 4; dir++) {

            if(canJump(x, y, jump, dir) == false)
                continue;

            int nx = x + dx[dir] * jump;
            int ny = y + dy[dir] * jump;

            long long nextTime = time + 1;


            if(nextTime < dist[nx][ny][jump]) {

                dist[nx][ny][jump] = nextTime;

                int nextState = makeState(nx, ny, jump);

                pq.push({nextTime, nextState});
            }
        }


        // =====================================
        // 2. 점프력 증가
        // =====================================

        if(jump < 5) {

            int nextJump = jump + 1;

            // 증가한 뒤 점프력의 제곱만큼 시간
            long long nextTime;
            nextTime = time + nextJump * nextJump;


            if(nextTime < dist[x][y][nextJump]) {

                dist[x][y][nextJump] = nextTime;

                int nextState = makeState(x, y, nextJump);

                pq.push({nextTime, nextState});
            }
        }


        // =====================================
        // 3. 점프력 감소
        // =====================================

        for(int nextJump = 1; nextJump < jump; nextJump++) {

            // 몇 단계 낮추든 시간은 1
            long long nextTime = time + 1;


            if(nextTime < dist[x][y][nextJump]) {

                dist[x][y][nextJump] = nextTime;

                int nextState = makeState(x, y, nextJump);

                pq.push({nextTime, nextState});
            }
        }
    }


    // 목적지까지 갈 수 없음
    return -1;
}


int main() {

    cin >> n;


    // 지도 입력
    for(int i = 1; i <= n; i++) {

        string s;
        cin >> s;

        for(int j = 1; j <= n; j++) {
            board[i][j] = s[j - 1];
        }
    }


    cin >> q;


    for(int i = 0; i < q; i++) {

        int r1, c1, r2, c2;

        cin >> r1 >> c1 >> r2 >> c2;

        cout << dijkstra(r1, c1, r2, c2) << '\n';
    }


    return 0;
}