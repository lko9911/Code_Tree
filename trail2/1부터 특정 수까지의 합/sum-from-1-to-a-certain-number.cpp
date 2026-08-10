#include <iostream>
using namespace std;

int add(int n){
    int result=1;
    for(int i=1; i<=n; i++){
        result += i;
    }
    return result/10;
}

int main() {
    int n;
    cin >> n;
    int result = add(n);
    cout <<result;
    return 0;
}