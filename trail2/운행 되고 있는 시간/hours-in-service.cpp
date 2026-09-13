#include <iostream>
#include <algorithm>
using namespace std;

int N;
int A[100], B[100];
bool C[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    int answer = 0;
    for(int i=0; i<N; i++){
        for(int k=0; k<1000; k++) C[k] = false;

        int cnt=0;
        for(int j=0; j<N; j++){
            if(i==j) continue;
            for(int a=A[j]; a<B[j]; a++) C[a] = true;
        }

        for(int k=0; k<1000; k++) {
            if(C[k]) cnt++;
        }
        answer = max(cnt,answer);
    }

    cout << answer;
    return 0;
}