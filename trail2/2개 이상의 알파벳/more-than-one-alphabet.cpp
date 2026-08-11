#include <iostream>
using namespace std;

bool check(string &s){
    int cnt=0;
    for(int i=0; i<s.length()-1; i++){
        for(int j=1; j<s.length(); j++){
            if(s[i]!=s[j]) cnt++;
        }
    }

    if(cnt>=2) return true;
    else return false;

}

int main() {
    string a;
    cin >> a;
    cout << (check(a) ? "Yes" : "No");
    return 0;
}