#include <iostream>
using namespace std;

int main() {
    int n, prod=1, cnt=0;
    cin >> n;
    while(1){
        prod *=2;
        cnt++;
        if(prod == n){
            cout << cnt;
            break;
        }
    }
    
    return 0;
}