#include <iostream>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;

    while(n--){
        int Q;
        cin >> Q;
        if(s.length()==1) cout << s << endl;
        else {
            if(Q==1) {
            s = s.substr(1,s.length()-1) + s.substr(0,1);
            cout << s << endl;
            }
        else if(Q==2) {
            s = s.substr(s.length()-1,1) + s.substr(0,s.length()-1);
            cout << s << endl;
        }
        else {
            for(int i=0; i<s.length()/2; i++){
            int temp;
            temp = s[i];
            s[i] = s[s.length()-i-1];
            s[s.length()-i-1] = temp;
            }
            cout << s << endl;
        }
        }
    }
    
    return 0;
}