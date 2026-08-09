#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >>s;

    for(int i=0; i<s.length(); i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            cout << (char) tolower(s[i]);
    }
    
    return 0;
}