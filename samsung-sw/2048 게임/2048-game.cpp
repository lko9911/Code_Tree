#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<vector<int>> board;
int answer = 0;


void moveLeft() {
    vector<vector<int>> temp(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++) {

        vector<int> v;

        for(int j = 0; j < n; j++) {
            if(board[i][j] != 0)
                v.push_back(board[i][j]);
        }

        int idx = 0;

        for(int j = 0; j < v.size(); j++) {

            if(j + 1 < v.size() && v[j] == v[j + 1]) {
                temp[i][idx++] = v[j] * 2;
                j++;
            }
            else {
                temp[i][idx++] = v[j];
            }
        }
    }

    board = temp;
}


void moveRight() {
    vector<vector<int>> temp(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++) {

        vector<int> v;

        // 오른쪽부터 읽기
        for(int j = n - 1; j >= 0; j--) {
            if(board[i][j] != 0)
                v.push_back(board[i][j]);
        }

        int idx = n - 1;

        for(int j = 0; j < v.size(); j++) {

            if(j + 1 < v.size() && v[j] == v[j + 1]) {
                temp[i][idx--] = v[j] * 2;
                j++;
            }
            else {
                temp[i][idx--] = v[j];
            }
        }
    }

    board = temp;
}


void moveUp() {
    vector<vector<int>> temp(n, vector<int>(n, 0));

    for(int j = 0; j < n; j++) {

        vector<int> v;

        // 위에서부터 읽기
        for(int i = 0; i < n; i++) {
            if(board[i][j] != 0)
                v.push_back(board[i][j]);
        }

        int idx = 0;

        for(int i = 0; i < v.size(); i++) {

            if(i + 1 < v.size() && v[i] == v[i + 1]) {
                temp[idx++][j] = v[i] * 2;
                i++;
            }
            else {
                temp[idx++][j] = v[i];
            }
        }
    }

    board = temp;
}


void moveDown() {
    vector<vector<int>> temp(n, vector<int>(n, 0));

    for(int j = 0; j < n; j++) {

        vector<int> v;

        // 아래에서부터 읽기
        for(int i = n - 1; i >= 0; i--) {
            if(board[i][j] != 0)
                v.push_back(board[i][j]);
        }

        int idx = n - 1;

        for(int i = 0; i < v.size(); i++) {

            if(i + 1 < v.size() && v[i] == v[i + 1]) {
                temp[idx--][j] = v[i] * 2;
                i++;
            }
            else {
                temp[idx--][j] = v[i];
            }
        }
    }

    board = temp;
}


void dfs(int depth) {

    if(depth == 5) {

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                answer = max(answer, board[i][j]);

        return;
    }

    // 현재 상태 저장
    vector<vector<int>> backup = board;


    for(int dir = 0; dir < 4; dir++) {

        if(dir == 0)
            moveLeft();

        else if(dir == 1)
            moveRight();

        else if(dir == 2)
            moveUp();

        else
            moveDown();


        dfs(depth + 1);


        // 원상복구
        board = backup;
    }
}


int main() {

    cin >> n;

    board.resize(n, vector<int>(n));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> board[i][j];


    dfs(0);


    cout << answer;

    return 0;
}