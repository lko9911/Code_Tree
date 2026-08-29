#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int N;
int M[1001];
int dp[1001];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> M[i];
    }

    for(int i=0; i < N; i++){
        dp[i] = 1;
    }

    for(int i=1; i < N; i++){
        for(int j=0; j<i; j++){
            if(M[i] > M[j])
                dp[i] = max(dp[j] + 1, dp[i]);
        }
    }

    int answer = INT_MIN;

    for(int i=0; i<N; i++)
        answer = max(answer,dp[i]);

    cout << answer;

    return 0;
}
