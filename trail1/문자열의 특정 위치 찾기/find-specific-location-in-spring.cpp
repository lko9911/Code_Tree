#include <iostream>
using namespace std;

int main() {
    string s;
    char c;
    int flage=0;
    cin >> s >> c;

    for(int i=0; i<s.length(); i++){
        if(s[i]==c){
        flage=1;
        cout << i;
        break;
        }
    }

    if(flage==0) cout << "No";

    return 0;
}