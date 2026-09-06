#include <iostream>
#include <climits>

using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int total = 0; 
    for (int j = 0; j < n-1; j++){
        int dis = abs(x[j] - x[j+1]) + abs(y[j] - y[j+1]);
        total += dis;
    }

    int answer = INT_MAX;
    for (int j = 0; j < n-1; j++){
        if(j==0 || j == n-1) continue;
        int total_diff = total - abs(x[j] - x[j+1]) - abs(y[j] - y[j+1]);
        total_diff -= (abs(x[j] - x[j-1]) + abs(y[j] - y[j-1]));
        total_diff += (abs(x[j-1] - x[j+1]) + abs(y[j-1] - y[j+1]));
    answer = min(total_diff, answer);
    }

    cout << answer;

    return 0;
}