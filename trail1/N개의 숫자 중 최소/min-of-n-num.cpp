#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n,arr[100];
    int min=INT_MAX, cnt=0;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(min >= arr[i]) {
            min = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(min == arr[i]) {
            cnt++;
        }
    }

    cout << min << " " << cnt;
    return 0;
}