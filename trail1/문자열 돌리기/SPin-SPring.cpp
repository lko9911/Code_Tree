#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    cout << s << endl;
    for(int i=0; i<s.length(); i++){
        cout << s.substr(s.length()-i-1,i+1) + s.substr(0,s.length()-(i+1)) << endl;
    }

    return 0;
}