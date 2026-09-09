#include <iostream>
#include <climits>

using namespace std;

int N, K;
int candy[100], pos[100];
int count[101];

int main() {
    cin >> N >> K;
    int answer = INT_MIN;

    int base = INT_MIN;
    for (int i = 0; i < N; i++) {
        cin >> candy[i] >> pos[i];
        count[pos[i]] += candy[i];
        base = max(base,pos[i]);
    }


    for(int i=0; i<=base; i++){
        int sum = 0;
        for(int j=i; j<=min(100,i+2*K); j++){
            sum += count[j];
        }
        answer = max(sum,answer);
    }

    cout << answer;

    return 0;
}