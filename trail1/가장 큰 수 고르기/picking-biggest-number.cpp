#include <iostream>
using namespace std;

int main() {
    int n;
    int max=0;

    for(int i=0; i<10; i++){
        cin >> n;
        if(max < n) max = n;
    }

    cout << max;
    return 0;
}