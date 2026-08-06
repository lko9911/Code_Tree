#include <iostream>
using namespace std;

int main() {
    string s;
    string c;
    int flage=0;
    cin >> s >> c;

    for(int i=0; i<s.length(); i++){
        if(s.substr(i,c.length())==c){
        flage=1;
        cout << i;
        break;
        }
    }

    if(flage==0) cout << -1;

    return 0;
}