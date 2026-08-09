#include <iostream>
#include <string>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int n = a+b;

    string str = to_string(n);
    int cnt=0;

    for(int i=0; str[i]; i++){
        if(str[i]=='1') cnt++; 
    }

    cout << cnt;

    return 0;
}