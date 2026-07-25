#include <iostream>
using namespace std;

int main() {
    int n=0;
    while(true){
        cin >> n;
        if(n < 25) cout << "Higher" << endl;
        else if(n>25) cout << "Lower" << endl;
        else {
            cout << "Good";
            break;
        }
    }
    return 0;
}