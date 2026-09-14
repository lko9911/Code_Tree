#include <iostream>
#include <climits>
using namespace std;

int N, K;
int num[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    int answer = INT_MIN;
    for (int i = 0; i < N-1; i++){
        for (int j = i+1; j < N; j++){
            if(num[i]==num[j] && (abs(i-j)<=K)){
                answer = max(answer,num[i]);
            }
        }
    }

    cout << (answer==INT_MIN ? -1 : answer);

    return 0;
}