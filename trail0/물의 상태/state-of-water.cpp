#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    if(w < 0) cout << "ice" << endl;
    else if( w >= 100) cout << "vapor" << endl;
    else cout << "water" ;
    return 0;
}