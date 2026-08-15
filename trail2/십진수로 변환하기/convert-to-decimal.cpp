#include <iostream>
using namespace std;

int main() {
    string arr;
        
    cin >> arr;

    int num=0;
    for(int i=0; i<arr.length(); i++){
        num = num * 2 + (int)(arr[i]-'0');
    }

    cout << num;

    return 0;
}