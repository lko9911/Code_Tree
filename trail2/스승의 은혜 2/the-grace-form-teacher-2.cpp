#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int N, B;
int P[1000];
int P_new[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    sort(P,P+N);

    int answer = INT_MIN;
    for(int i=0; i<N; i++){
        int cnt = 0;
        P_new[i] = P[i]/2;
        int B_new = B;

        for(int j=0; j<N; j++){
            if(i==j) continue;
            P_new[j] = P[j];
        }

        for(int j=0; j<N; j++){
            B_new -= P_new[j];
            if(B_new >= 0) cnt++;
        }
        answer = max(answer, cnt);
    }

    cout << answer;
    return 0;
}