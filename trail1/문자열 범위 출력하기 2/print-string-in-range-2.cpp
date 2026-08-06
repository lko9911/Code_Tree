#include <iostream>
using namespace std;

int main() {
    string s;
    int n;

    cin >> s >> n;

    if(s.length()>n)
    for(int i=s.length(); i>s.length()-n; i--){
        cout << s[i-1];
    }
    
    if(s.length()<=n)
    for(int i=s.length(); i>0; i--){
        cout << s[i-1];
    }
    return 0;
}