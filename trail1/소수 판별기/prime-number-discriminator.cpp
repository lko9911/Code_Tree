#include <iostream>
using namespace std;

int main() {
    int n;
    bool flage=true;
    cin >> n;
    for(int i=2; i<n; i++)
        if(n%i==0) flage = false;
        
    cout << (flage ? "P" : "C");
    return 0;
}