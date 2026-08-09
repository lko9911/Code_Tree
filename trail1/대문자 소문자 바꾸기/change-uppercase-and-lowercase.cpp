#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i=0; s[i]; i++){
        if(s[i]>='A' && s[i]<='Z'){
            cout << (char)tolower(s[i]);
        } else if(s[i]>='a' && s[i]<='z')
        cout << (char)toupper(s[i]); 
    }
    

    return 0;
}