#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool exist_ee = false, exist_ab= false;
    for(int i=0; i<s.length(); i++)
        if(s.substr(i,2)=="ee")
            exist_ee = true;
        else if(s.substr(i,2)=="ab")
            exist_ab = true;

    cout << (exist_ee ? "Yes" : "No") << " ";
    cout << (exist_ab ? "Yes" : "No") << " ";
    return 0;
}