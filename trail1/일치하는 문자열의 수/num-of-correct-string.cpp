#include <iostream>
using namespace std;

int main() {
    int n;
    string A;
    cin >> n >> A;

    int cnt=0;

    while(n--){
        string str;
        cin >> str;
        if(str == A) cnt++;
    }

    cout << cnt;
    return 0;
}