#include <iostream>
using namespace std;

int main() {
    string s;
    string c;
    int cnt=0;
    cin >> s >> c;

    for(int i=0; i<=s.length()-c.length(); i++){
        if(s.substr(i,c.length())==c){
        cnt++;
        }
    }

    cout << cnt;

    return 0;
}