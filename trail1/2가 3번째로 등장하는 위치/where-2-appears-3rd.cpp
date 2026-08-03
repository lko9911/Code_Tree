#include <iostream>
using namespace std;

int main() {
    int n, arr[100],cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];

        if(arr[i]==2) cnt++;
        if(cnt==3) {
            cout << i+1;
            break;
        }
    }

    return 0;
}