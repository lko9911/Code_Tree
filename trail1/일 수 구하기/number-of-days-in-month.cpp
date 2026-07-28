#include <iostream>
using namespace std;

/*
2월 -> 28일
4,6,9,11월 -> 30일
나머지 -> 31일
*/

int main() {
    int n;
    cin >> n;

    if(n == 2)cout << 28;
    else if(n==4 || n==6 || n==9 || n==11)cout << 30;
    else cout << 31;
    return 0;
}