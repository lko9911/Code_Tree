#include <iostream>
using namespace std;

int main() {
    string s;
    cin >>s;

    while(s.length()!=1){
        int n;
        cin >> n;

        if(n >= s.length()) s.erase(s.length()-1,1);
        else s.erase(n,1);

        cout << s << endl;

    }

    return 0;
}