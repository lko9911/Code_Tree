#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str = to_string(n);

    int sum=0;
    for(int i=0; str[i]; i++)
        sum += str[i] - '0';

    cout << sum;

    return 0;
}