#include <iostream>
using namespace std;

int result(int a, int b){
    int n=a;
    for(int i=0; i<b-1; i++){
        a *= n;

    }
    return a;
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << result(a,b);
    return 0;
}