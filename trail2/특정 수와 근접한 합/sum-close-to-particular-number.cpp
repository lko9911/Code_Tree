#include <iostream>
#include <climits>
using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int sum=0;
    for (int i = 0; i < N; i++){
        sum += arr[i];
    }

    int answer = INT_MAX;
    for (int i = 0; i < N-1; i++){
        for(int j=i+1; j<N; j++){
            int sum2 = sum - (arr[i] + arr[j]);
            int diff = abs(S - sum2); 
            answer = min(answer, diff);
        }
    }

    cout << answer;

    return 0;
}