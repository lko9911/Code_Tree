#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i=n;
    while(i <= 100){
        if(i >= 90) cout << "A" << " ";
        else if(i >= 80) cout << "B" << " ";
        else if(i >= 70) cout << "C" << " ";
        else if(i >= 60) cout << "D" << " ";
        else cout << "F" << " ";
        i++;
    }
    return 0;
}