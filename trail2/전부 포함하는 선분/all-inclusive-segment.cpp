#include <iostream>
#include <climits>
using namespace std;

int n;
int x1[100], x2[100];
bool line[101];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    int answer = INT_MAX;

    for(int i=0; i<n; i++){
        int left = INT_MAX;
        int right = INT_MIN;

        for(int j=0; j<n; j++){
            if(i==j) continue;
            left = min(left, x1[j]);
            right = max(right, x2[j]);
        }
        answer = min(right-left, answer);
    }

    cout << answer;

    return 0;
}