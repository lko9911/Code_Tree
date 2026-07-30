#include <iostream>
using namespace std;

int main() {
    int w,h;
    char c;
    
    while(1){
    cin >> w >> h >> c;
    cout << w*h << endl;
    if(c=='C') break;
    }

    return 0;
}