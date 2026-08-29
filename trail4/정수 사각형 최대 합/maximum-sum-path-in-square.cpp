#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int a[100][100];
int dp[101][101];


void start(){
    dp[0][0] = a[0][0];

    for(int i=1; i<n; i++)
        dp[i][0] = dp[i-1][0] + a[i][0];
    
    for(int j=1; j<n; j++)
        dp[0][j] = dp[0][j-1] + a[0][j];
    
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    start();

    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++)
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + a[i][j];
    }

    cout << dp[n-1][n-1];

 
    return 0;
}
