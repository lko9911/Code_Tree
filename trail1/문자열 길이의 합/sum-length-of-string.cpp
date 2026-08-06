#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, sum=0, cnt=0;
    cin >> n;

    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        sum += s.length();
        if(s[0]=='a') cnt++;
    }

    cout << sum << " " << cnt;

    return 0;
}