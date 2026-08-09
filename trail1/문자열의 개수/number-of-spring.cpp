#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt=0, idx=-1;
    string str[200];
    
    for(int i=0; i<200; i++){
        cin >> str[i];
        if(str[i]=="0") {
            idx = i;
            break;
        }
        cnt++;
    }

    cout << cnt << endl;
    for(int i=0; i<idx; i+=2){
        cout << str[i] << endl;
    }

    return 0;
}