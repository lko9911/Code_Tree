#include <iostream>
#include <climits>

using namespace std;

int N, H, T;
int arr[100];

int main() {
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int answer = INT_MAX;

    for(int i=0; i<=N-T; i++){
        int cost = 0;
        for(int j=i; j<T+i; j++){
            cost += abs(H-arr[j]);
        }
        answer = min(answer,cost);
    }

    cout << answer;

    return 0;
}