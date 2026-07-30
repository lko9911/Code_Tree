#include <iostream>
using namespace std;

int main() {
    int n, i=5;
    bool flage = true;

    while(i--){
        cin >> n;
        if(n%3!=0) flage = false;
    }

    cout << (flage ? 1 : 0);

    return 0;
}