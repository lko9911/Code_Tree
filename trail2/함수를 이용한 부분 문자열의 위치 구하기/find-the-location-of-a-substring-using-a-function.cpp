#include <iostream>
#include <string>
using namespace std;

int check(string &n,string &m){
    for(int i=0; i<n.length()-m.length()+1; i++){
        if(n.substr(i,m.length()) == m) return i;
    }
    return -1;
}

int main() {
    string n,m;
    cin >> n >> m;

    cout << check(n,m);

    return 0;
}