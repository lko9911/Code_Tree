#include <iostream>
using namespace std;

int result(int a, int b){
    int n=1;
    for(int i=0; i<b; i++){
        n*=a;
    }
    return n;
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << result(a,b);
    return 0;
}