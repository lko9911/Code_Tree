#include <iostream>
#include <climits>
using namespace std;

int n, k;
int arr[1000];

int main() {
    cin >> n >> k;

    int max_num = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        max_num = max(max_num, arr[i]); 
    }



    // 최솟값
    int ans=INT_MIN;
    for(int i=1; i<=max_num; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(arr[j]>=i && arr[j]<=i+k) cnt++;
        }
        ans = max(ans,cnt);
    }  

    cout << ans;

    return 0;
}