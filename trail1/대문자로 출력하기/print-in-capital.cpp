#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;  

    cin >> s;
    for(int i=0; i<s.length(); i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            cout << (char) toupper(s[i]);
    }

    return 0;
}