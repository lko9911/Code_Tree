#include <iostream>
using namespace std;

int main() {
    int s, age;
    cin >> s >> age;

    if(age >= 19){
        if(s == 0) cout << "MAN";
        else cout << "WOMAN";
    } else {
        if(s == 0) cout << "BOY";
        else cout << "GIRL";
    }
        
    return 0;
}