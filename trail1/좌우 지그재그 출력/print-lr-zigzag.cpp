#include <iostream>
using namespace std;

int main() {
    int n, cnt=1, cnt2=1;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%2!=0){
        for(int j=1; j<=n; j++){
            cout << cnt << " ";
            cnt++;       
            cnt2 = cnt;
        }
        } else {
            for(int j=1; j<=n; j++){
            cout << cnt2 + n - j << " ";
            cnt++;       
        }
        }


    cout << endl;
    }
    return 0;
}