#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j <= num; j++) cout << "*";
    num +=2;
    cout << endl;
    }
    return 0;
}