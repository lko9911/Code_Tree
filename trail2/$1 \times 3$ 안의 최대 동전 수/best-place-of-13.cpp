#include <iostream>
#include <algorithm>
using namespace std;

int arr[20][20];

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        cin >> arr[i][j];
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-2; j++)
        ans = max(ans,arr[i][j]+arr[i][j+1]+arr[i][j+2]);
    }

    cout << ans;

    return 0;
}