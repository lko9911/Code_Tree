#include <iostream>
using namespace std;

int main() {
    int n, cnt=0;
    cin >> n;

    int b = n;

    for(int i=1; i<=b; i++){
    cnt++;
    n /= i;
    //cout << n << " ";
        if(n <= 1) {
            break;
        }
    }
    cout << cnt;
    return 0;
}