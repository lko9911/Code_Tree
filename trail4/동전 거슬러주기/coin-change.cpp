#include <iostream>
#include <climits>

using namespace std;

int n, m;
int coin[100001];
int dp[100001];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    for(int i=0; i<=m; i++)
        dp[i] = INT_MAX;

    dp[0] = 0;

    for(int i=1; i<=m; i++){
        for(int j=0; j<n; j++){
            if(i >= coin[j]){
                if(dp[i-coin[j]]==INT_MAX) continue;

                dp[i] = min(dp[i-coin[j]] + 1, dp[i]);
            }
        }
    }

    int answer = dp[m];
    if(answer == INT_MAX)
        answer = -1;

    cout << answer;
    return 0;
}
