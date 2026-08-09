#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    
    for(int i=0; a[i]; i++){
        if(a[i]<'0' || a[i]>'9') {
            a.erase(i,a.length()-i);
            break;
        }
    }

    for(int i=0; b[i]; i++){
        if(b[i]<'0' || b[i]>'9') {
            b.erase(i,b.length()-i);
            break;
        }
    }

    cout << stoi(a) + stoi(b);
    return 0;
}