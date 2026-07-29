#include <iostream>
using namespace std;

int main() {
    int cnt=0;
    int i=10,n;

    while(i--){
        cin >> n;
        if(n%2!=0) cnt++;

    }
    cout << cnt;
    return 0;
}