#include <iostream>
using namespace std;

int main() {
    string s,m;
    cin >> s >> m;

    for(int i=0; i<m.length(); i++){
        if(m[i]=='L') s = s.substr(1,s.length()-1) + s.substr(0,1);
        else s = s.substr(s.length()-1,1) + s.substr(0,s.length()-1);
    }

    cout << s;

    return 0;
}