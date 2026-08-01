#include <iostream>
using namespace std;

int main() {
    int n, cnt=65;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) {
            cout << (char)cnt;
        cnt++;
        }
    cout << endl;
    }
    return 0;
}