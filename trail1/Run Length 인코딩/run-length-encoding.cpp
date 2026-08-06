#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string result={};
    cin >> a;   
    int cnt=1;

    for(int i=0; i<a.length(); i++){
        if(a[i] == a[i+1]) cnt++;
        else {
            result = result + a[i] + to_string(cnt);
           // cout << a[i] << cnt;
            cnt=1;
        }
    }

    cout << result.length() << endl <<result;
    return 0;
}