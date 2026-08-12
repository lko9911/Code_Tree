#include <iostream>
#include <algorithm>
using namespace std;

int arr[100];

int main() {
    int n,k;
    cin >> n >> k;
    while(k--){
        int a,b;
        cin >> a >> b;
        for(int i=a; i<=b; i++){
            arr[i]++;
        }
    }

    sort(arr,arr+n);
    cout << arr[n-1];

    return 0;
}