#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int arr[100];

int main() {
    int n, k;
    cin >> n >> k;

    for(int i=0; i<n; i++)
        cin >> arr[i];

    int ans = INT_MIN;
    for(int i=0; i<=n-k; i++){
        int sum=0;
        for(int j=i; j<i+k; j++)
            sum+=arr[j];
        ans = max(ans,sum);
    }

    cout << ans;

    return 0;
}