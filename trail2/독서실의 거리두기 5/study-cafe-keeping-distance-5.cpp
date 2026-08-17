#include <iostream>
#include <climits>
using namespace std;

int arr[21];
int zero[21];
int n;

int check(int arr[]){
    int dist;
    int answer = INT_MAX;
    for(int i=0; i<n-1; i++){
        dist = 0;

        if(arr[i]==0) continue;

        for(int j=i+1; j<n; j++){
            if(arr[j]==1) {
                dist = j-i;
                answer = min(answer, dist);
                break;
            }
        }
    }

    return answer;
}

int main() {
    cin >> n;
    char c;
    int cnt=0;
    for(int i=0; i<n; i++){
        cin >> c;
        arr[i] = c - '0';
        if(arr[i]==0) zero[cnt++] = i;
    }

    int ans=INT_MIN;
    // 0인 인덱스에 순차적으로 채우고, check
    for(int i=0; i<cnt; i++){
        arr[zero[i]] = 1;
        ans = max(ans, check(arr));
        arr[zero[i]] = 0;
    }

    cout << ans;

    return 0;
}