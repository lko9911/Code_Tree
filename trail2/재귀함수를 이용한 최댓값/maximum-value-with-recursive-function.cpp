#include <iostream>
#include <climits>
using namespace std;

int n;
int arr[100];
int maxv = INT_MIN;

int F(int n){
    if(n==0) return maxv;
    if(maxv < arr[n-1]) maxv = arr[n-1];
   // cout << maxv << " ";

    return F(n-1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << F(n);
    // Please write your code here.

    return 0;
}