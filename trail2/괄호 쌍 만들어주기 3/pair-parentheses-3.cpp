#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int cnt=0;
    cin >> a;
    for(int i =0; i<a.length()-1; i++)
        if(a[i]=='(')
            for(int j =i; j<a.length(); j++)
             if(a[j]==')') cnt++;

    cout <<cnt;
    return 0;
}