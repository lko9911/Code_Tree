#include <iostream>
using namespace std;

int main() {
    int n,cnt=1;

    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i<=j) {
                cout << cnt << " ";
                cnt++;
            }
            else cout << "  ";
            if(cnt==10) cnt = 1;
        }
        cout << endl;
    }
    return 0;
}