#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int arr[100];

int main() {
    int n;
    cin >>n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = INT_MAX;
    
    for(int i=0; i<n; i++){
        int result = 0;
        for(int j=0; j<n; j++)
        result += abs(i-j)*arr[j];

        ans = min(result,ans);
    }

    cout << ans;

    return 0;
}