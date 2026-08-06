#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, cnt=0;
    string s[1000],s2[1000];

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<s[i].length(); j++)
        s2[cnt++] = s[i][j];
    }

    for(int i=0; i<cnt+1; i++){
        cout << s2[i];
        if((i+1)%5==0) cout << endl;
       
    }


    return 0;
}