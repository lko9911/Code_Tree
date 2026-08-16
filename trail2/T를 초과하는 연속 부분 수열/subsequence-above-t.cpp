#include <iostream>
using namespace std;

int arr[1000];

int main() {
    int n, t;
    cin >> n >> t;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int cnt=0;
    int maxcnt=0;

    for(int i=0; i<n; i++){
        if(arr[i] > t) cnt++;
        else cnt=0;
 
        if(maxcnt < cnt) maxcnt = cnt;
    }

    cout << maxcnt;

    return 0;
}