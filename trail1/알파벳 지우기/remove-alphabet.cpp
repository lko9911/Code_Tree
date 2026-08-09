#include <iostream>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    string str1 = {};
    string str2 = {};

    for(int i; a[i]; i++){
        if(a[i]>='0' && a[i] <='9') str1 += a[i];
    }

    for(int i; b[i]; i++){
        if(b[i]>='0' && b[i] <='9') str2 += b[i];
    }

    cout << stoi(str1) + stoi(str2);
    return 0;
}