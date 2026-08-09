#include <iostream>
using namespace std;

int main() {
    int n, sum=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        sum +=a;
    }

    string b = to_string(sum);
    cout << b.substr(1,b.length()-1) + b.substr(0,1); 
    return 0;
}