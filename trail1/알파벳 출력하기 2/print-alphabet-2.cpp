#include <iostream>
using namespace std;

int main() {
    int n;
    char cnt = 'A';
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) {
            if(i<=j) {
            cout << cnt << " ";
            cnt++;
            } else cout << "  ";
            if(cnt > 'Z') cnt = 'A';
        }
    cout << endl;
    }

    return 0;
}