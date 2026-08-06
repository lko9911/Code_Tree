#include <iostream>
#include <string>
using namespace std;

int main() {
    string c1,c2;
    cin >> c1 >> c2;
    if(c1.length() > c2.length()) cout << c1 << " " << c1.length();
    else if(c1.length()<c2.length())  cout << c2 << " " << c2.length();
    else cout << "same";

  //  cout << (c1.length() > c2.length() ? c1 : c2) << " " << (c1.length() > c2.length() ? c1.length() : c2.length());
    return 0;
}