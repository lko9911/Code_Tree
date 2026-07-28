#include <iostream>
using namespace std;

int main() {
    int score_mid, score_final;
    cin >> score_mid >> score_final;

    if(score_mid >= 90){
        if(score_final >= 95) cout << 100000;
        else if(score_final >= 90) cout << 50000;
        else cout << 0;
    } else cout << 0;
    return 0;
}