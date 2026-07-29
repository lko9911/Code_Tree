#include <iostream>
using namespace std;

int main() {
    int n,a;
    cin >> n >> a;

    int i=1;
    while(i<=n){
        if(i%a==0) cout << 1 << endl;
        else cout << 0 << endl;

        i++;
    }
    return 0;
}