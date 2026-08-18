#include <iostream>
using namespace std;

int arr[10];
int arr2[10];

int main() {
    int n, cnt=0;
    cin >> n;

    for(int i=0; i<10; i++){
        arr[i] = -1;
        arr2[i] = -1;
    }

    for(int i=0; i<n; i++){
        int p,pos;
        cin >> p >> pos;
        arr[p-1] = pos;

        if((arr2[p-1] == 0 && arr[p-1] == 1) || (arr2[p-1] == 1 && arr[p-1] == 0)) cnt++;
        arr2[p-1] = arr[p-1];

    }

    cout << cnt;
    return 0;
}