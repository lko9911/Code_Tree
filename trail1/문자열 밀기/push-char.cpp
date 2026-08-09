#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s.substr(1,s.length()-1) + s.substr(0,1);
    return 0;
}