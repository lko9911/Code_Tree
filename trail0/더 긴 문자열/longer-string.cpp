#include <iostream>
using namespace std;

int main() {
    string c1;
    string c2;
    cin >> c1 >> c2;
    if(c1.length() > c2.length()) cout << c1 << " " << c1.length();
    else if(c1.length() == c2.length()) cout << "same";
    else cout << c2 << " " << c2.length() ;
    return 0;
}