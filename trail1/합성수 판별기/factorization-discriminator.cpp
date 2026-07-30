#include <iostream>
using namespace std;

int main() {
    int n, flag=0;
    cin >> n;

    for(int i = 2; i<n; i++){
        if(n%i==0) flag=1;
    }

    cout << (flag ? "C" : "N");
    return 0;
}