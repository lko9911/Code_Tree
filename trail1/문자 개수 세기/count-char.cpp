#include <iostream>
#include <string>
using namespace std;

int main() {
    string c;
    char m;
    int cnt=0;
    getline(cin,c);
    cin >> m;

    for(int i=0; i<c.length(); i++)
        if(c[i]==m) cnt++;

    cout << cnt;
    return 0;
}