#include <iostream>
using namespace std;

int main() {
    int arr[100], cnt=0;

    for(int i=0; i<100; i++){
        cin >> arr[i];
        cnt++;
        if(arr[i]==0) break;
    }

    for(int i=0; i<cnt-1; i++){
        if(arr[i]%2==0)
        cout << arr[i]/2 << " ";
        else cout << arr[i] +3 << " ";
    }

    return 0;
}