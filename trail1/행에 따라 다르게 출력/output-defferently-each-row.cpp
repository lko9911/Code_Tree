#include <iostream>
using namespace std;

int main() {
    int n, cnt=1;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%2!=0)
        for(int j=1; j<=n; j++) {
            cout << cnt << " ";
            if(j==n) continue;
            cnt++;
        } else for(int j=1; j<=n; j++) {
            cnt+=2;
            cout << cnt << " ";
            if(j==n) cnt++;
        }

    cout << endl;
    }

    return 0;
}