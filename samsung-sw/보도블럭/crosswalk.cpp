#include <iostream>
using namespace std;

int n,L;
int board[100][100];

bool check(int arr[]){
    bool used[100] = {};

    for(int i=0; i<n-1; i++){
        int diff = arr[i+1] - arr[i];

        if(diff == 0) continue;

        if(abs(diff) > 1) return false;

        // 오르막
        if(diff == 1){
        for(int j=i; j>i-L; j--){
            if(j<0) return false;

            if(arr[j] != arr[i]) return false;

            if(used[j]) return false;
        }
            for(int j = i; j>i-L; j--) used[j] = true;
        } else if(diff==-1){

            for(int j=i+1; j<=i+L; j++){
            if(j>=n) return false;

            if(arr[j] != arr[i+1]) return false;

            if(used[j]) return false;
            }
            for(int j = i+1; j<=i+L; j++) used[j] = true;
        }
        }
    return true;
}

int main() {
    cin >> n >> L;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
        }
    }
    int answer = 0;

    for(int i=0; i<n; i++){
        int arr[100];

        for(int j=0; j<n; j++){
            arr[j] = board[i][j];
        }

        if(check(arr)) answer++;
    }

    for(int j=0; j<n; j++){
        int arr[100];

        for(int i=0; i<n; i++){
            arr[i] = board[i][j];
        }

        if(check(arr)) answer++;
    }

    cout << answer;

    return 0;
}