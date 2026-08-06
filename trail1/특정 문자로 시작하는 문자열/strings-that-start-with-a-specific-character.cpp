#include <iostream>
using namespace std;

int main() {
    int n;
    string s[20];
    char c;
    cin >>n;
    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    cin >> c;

    int cnt=0, sum=0;
    for(int i=0; i<n; i++){
        if(s[i][0]==c) {
            cnt++;
            sum+=s[i].length();
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << cnt << " " << (double)sum/cnt;

    return 0;
}