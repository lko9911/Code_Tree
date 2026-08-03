#include <iostream>
using namespace std;

int main() {
    int n, cnt=0;

    cin >> n;

    for(int i=1; i<100; i++){
        cout << n*i << " ";
        if((n*i)%5==0) {
            cnt++;
        }
        if(cnt==2) break;
    }
    return 0;
}