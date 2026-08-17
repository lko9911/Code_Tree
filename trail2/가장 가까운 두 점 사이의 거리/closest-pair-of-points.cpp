#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int x[100], y[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i < n-1; i++){
        int dist=0;
        for (int j = i+1; j < n; j++){
            dist = abs(x[i]-x[j])*abs(x[i]-x[j]) + abs(y[i]-y[j])*abs(y[i]-y[j]);
            ans = min(ans,dist);
        }
    }

    cout << ans;


    return 0;
}