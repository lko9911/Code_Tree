#include <iostream>
using namespace std;

int main() {
    string s;
    int n;

    cin >> s >> n;
    while(n--){
        int q,n1,n2;
        char a,b;
        cin >> q;

        if(q==1){
            cin >> n1 >> n2;
            char temp;
            temp = s[n2-1];
            s[n2-1] = s[n1-1];
            s[n1-1] = temp;
            cout << s << endl;
        }else if(q==2){
            cin >> a >> b;
            for(int i=0; i<s.length(); i++){
                if(s[i]==a) s[i] = b;
            }
            cout << s << endl;
        }

    }
    return 0;
}