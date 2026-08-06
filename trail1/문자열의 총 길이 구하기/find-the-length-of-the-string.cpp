#include <iostream>
#include <string>
using namespace std;

int main() {
    string c[10];
    int sum =0;

    for(int i=0; i<10; i++){
        cin >> c[i];
        sum += c[i].length();
    }

    cout << sum;
    return 0;
}