#include <iostream>
#include <string> 
using namespace std;

string a;

int main() {
    cin >> a;

    bool changed = false;

    for(int i=0; i<a.size(); i++){
        if(a[i]=='0') {
            a[i] = '1';
            changed = true;
            break;
        }
    }

    if(!changed)
        a[a.size()-1] = '0';

    // 2진수 10진수
    long long answer = 0;

    for(int i=0; i<a.size();i++){
        answer = answer * 2 + (a[i]-'0');
    }

    cout << answer;

    return 0;
}