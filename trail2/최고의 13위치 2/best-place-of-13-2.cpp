#include <iostream>

using namespace std;

int N;
int board[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> board[i][j];

    int answer = -1;

    for (int i = 0; i < N; i++)
        for (int j = 0; j <= N-3; j++){
            int sum = board[i][j] + board[i][j+1] + board[i][j+2];

             for (int i1= 0; i1 < N; i1++)
                for (int j1 = 0; j1 <= N-3; j1++){
                    if(i==i1){
                        if(!(j+2<j1 || j1 + 2 < j)) continue;
                    }

                    int sum2 = board[i1][j1] + board[i1][j1+1] + board[i1][j1+2];
                    answer = max(answer, sum+sum2);
        }


        }

    cout << answer;
    return 0;
}