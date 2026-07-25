#include <iostream>
using namespace std;

int main() {
    int n;
    int s=0;
    cin >> n;

    for(int i = 1; i<=100; i++){
        s += i;
        if(s >= n){
            cout << i << endl;
            break;
        }
    }

    return 0;
}