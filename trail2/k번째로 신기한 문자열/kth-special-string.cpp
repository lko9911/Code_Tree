#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str[100];
    string s;

    int n,k, cnt=0;
    cin >> n >> k >> s;
    for(int i=0; i<n; i++){
        cin >> str[i];
    }

    sort(str, str+n);

    for(int i=0; i<n; i++){
        if(str[i].substr(0,s.length())==s){
            cnt++;
            if(cnt == k) {
                cout << str[i];
                break;
            }
        }
    }

    return 0;
}