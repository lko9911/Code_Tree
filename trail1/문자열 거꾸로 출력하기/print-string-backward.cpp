#include <iostream>
using namespace std;

int main() {

    while(1){
        string str;
        cin >> str;
        if(str == "END") break;
        for(int i=0; i<str.length(); i++) cout << str[str.length()-i-1];
        cout << endl;
    }

    return 0;
}