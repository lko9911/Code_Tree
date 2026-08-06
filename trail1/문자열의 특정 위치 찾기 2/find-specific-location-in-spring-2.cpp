#include <iostream>
#include <string>
using namespace std;

int main() {
    string c[5] = { "apple", "banana", "grape", "blueberry", "orange"};
    char a;
    int cnt=0;
    cin >> a;
    for(int i=0; i<5;i++){
        if(c[i][2]==a || c[i][3]==a) {
           cout << c[i] << endl;
            cnt++;
            }
    }
    cout << cnt;

    return 0;
}