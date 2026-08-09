#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    c++;
    if(c > 'z') c='a';
    cout << c; 
    return 0;
}