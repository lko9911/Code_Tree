#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char c = s[1];
    char sa = s[0];
    for(int i=0; i<s.length(); i++)
        if(s[i]==c) s[i] = sa;

    cout << s;

    return 0;
}