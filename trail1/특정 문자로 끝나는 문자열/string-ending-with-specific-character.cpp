#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[10];
    char c;
    int cnt=0;

    for(int i=0; i<10; i++)
        cin >> s[i];
    cin >>c;

    for(int i=0; i<10; i++){
        int len = s[i].length();
        if(s[i][len-1]==c) {
            cout << s[i] << endl;
            cnt++;
            }
    
    }

    if(cnt==0) cout << "None";


    return 0;
}