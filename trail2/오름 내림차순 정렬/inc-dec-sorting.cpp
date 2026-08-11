#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int arr[100];

int main() {
    int n;
    cin >> n;
    int cnt=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        cnt++;
    }

    sort(arr,arr+cnt);
    for(int i=0; i<n; i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;
    for(int i=0; i<n; i++){
        cout <<  arr[n-i-1] << " ";
    }

    return 0;
}