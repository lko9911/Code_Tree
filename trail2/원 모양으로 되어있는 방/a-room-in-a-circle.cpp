#include <iostream>
#include <climits>
using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int answer = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        int total = 0;
        for(int dist=0; dist<=n-1; dist++){
            int room = (i+dist)%n;
            total += (a[room] * dist);
        }
        answer = min(total, answer);
    }

    cout << answer;

    return 0;
}