#include <iostream>
using namespace std;

int main() {
    string arr[4];

    for(int i=0; i<4; i++){
        cin >> arr[i];
    }

    for(int i=0; i<4; i++){
        cout << arr[3-i] << endl;
    }

    return 0;
}