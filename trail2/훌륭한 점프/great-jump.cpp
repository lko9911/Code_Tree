#include <iostream>
#include <climits>
using namespace std;

int arr[100];
int n,k;

bool IsPossible(int max_val){
    int availalbe_idx[100] = {};
    int cnt=0;

    for(int i=0; i<n; i++){
        if(arr[i]<=max_val) availalbe_idx[cnt++] = i;
    }

    for(int i=1; i<cnt; i++){
        int dist = availalbe_idx[i] - availalbe_idx[i-1];
        if(dist > k) return false;
    }

    return true;
}

int main() {
    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }

    int max_val = 0;
    for(int i=0; i<n; i++){
        max_val = max(arr[i], max_val); 
    }

    int minimax = INT_MAX;
    for(int a=max(arr[0], arr[n-1]); ; a++){
        if(IsPossible(a)){
            minimax = a;
            break;
        }
    }

    cout << minimax;

}