#include <iostream>

using namespace std;

int N, M;
int A[100], B[100];
int countA[101], countB[101];

int main() {
    cin >> N >> M;
    int answer = 0;
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < M; i++) cin >> B[i];

    for(int i=0; i<M; i++){
        countA[A[i]]++;
    }

    for(int i=0; i<M; i++){
        countB[B[i]]++;
    }

    bool same = true;
    for(int i=1; i<=100; i++){
        if(countA[i] != countB[i]){
            same = false;
            break;
        }
    }

    if(same) answer++;

    for(int i=M; i<N; i++){
        countA[A[i-M]]--;
        countA[A[i]]++;

        bool same = true;
            for(int i=1; i<=100; i++){
                if(countA[i] != countB[i]){
                    same = false;
                    break;
                }
            }
            
            if(same) answer++;
    }

    cout << answer;
    return 0;
}