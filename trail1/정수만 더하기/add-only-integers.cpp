#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    int sum=0;
    cin >>s;

    for(int i=0; i<s.length(); i++){
        if(s[i]>='0' && s[i]<='9'){
            int n = s[i] - '0';
            sum +=n;
        }
    }
    cout << sum;
    
    return 0;
}