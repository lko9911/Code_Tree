#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[2000];
    for(int i=0; i<2*n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+2*n);

    int sum=0, max=0;

    for(int i=0; i<n; i++){
        sum = arr[i] + arr[2*n-1-i];
        if(sum > max) max = sum;
    }

    cout << max;

    return 0;
}