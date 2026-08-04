#include <iostream>
using namespace std;

int main() {
    int max = -1000, min= 1000;
    int n=0;

    while(1){
        cin >> n;
        if(n==999 || n==-999) break;

        if(max < n) max = n;
        if(min > n) min = n;
    }

    cout << max  << " " << min;
    return 0;
}