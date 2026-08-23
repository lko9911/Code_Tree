#include <iostream>
#include <climits>
using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    int answer = INT_MIN;
    for (int i = 0; i < N-2; i++) {
        for (int j = 0; j < N-2; j++) {
            int cnt=0;

            for(int x = i; x<i+3; x++){
                for(int y=j; y<j+3; y++)
                    if(grid[x][y]==1) cnt++;
            }
            answer = max(answer,cnt);
        }
    }

    cout << answer;
    return 0;
}
