#include <iostream>
using namespace std;

int main() {
    int n,i=1;
    cin >> n;
    while(i*3<=n){
        cout << i*3 << " ";
        i++;
    }
    return 0;
}