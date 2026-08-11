#include <iostream>
using namespace std;

void PrintH(int n){
    cout << "HelloWorld" << endl;

    if(n==1) return;

    PrintH(n-1);
}

int main() {
    int n;
    cin >> n;
    PrintH(n);
    return 0;
}