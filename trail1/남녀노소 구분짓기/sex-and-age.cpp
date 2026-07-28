#include <iostream>
using namespace std;

int main() {
    int sex, age;
    cin >> sex >> age;

    if(sex == 1){
        if(age >= 19) cout << "WOMAN";
        else cout << "GIRL";
    } else {
        if(age >= 19) cout << "MAN";
        else cout << "BOY";
    }
    return 0;
}