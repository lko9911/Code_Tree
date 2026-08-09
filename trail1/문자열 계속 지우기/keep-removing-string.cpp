#include <iostream>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    int len = a.length();

    for(int i=0; i<len; i++){
        if(i<0) i=0;

        if(a.substr(i,b.length())==b) {
            a.erase(i,b.length());
            len = a.length();
            i-=2;
        }
    }
    cout << a << endl;
    return 0;
}