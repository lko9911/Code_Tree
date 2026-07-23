#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    cout << a+b+c << "\n" << (double)(a+b+c)/3 << "\n" << (int)(a+b+c - (double)(a+b+c)/3) ;
    return 0;
}