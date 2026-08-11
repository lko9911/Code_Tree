#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool Check(string &s){
    string lower_s = {};

    for(int i=0; i<s.length();i++){
        lower_s += tolower(s[i]); 
    }

    for(int i=0; i<lower_s.length()/2;i++){
        if(lower_s[i] != lower_s[lower_s.length()-i-1]) return false;
    }
    return true;

}


int main() {
    string s;
    cin >> s;

    if(Check(s)) cout << "Yes";
    else cout << "No";

    return 0;
}