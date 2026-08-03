#include <iostream>
using namespace std;

int main() {
    int n,q, arr[100];
    cin >> n >> q;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<q; i++){
        int a,b,idx=0;
        cin >> a >> b;
        if(a==1) cout << arr[b-1];
        else if(a==2) {
            for(int j=0; j<n; j++){
                if(arr[j]==b) {
                    idx=1;
                    cout << j+1;
                    break;
            } 
        }
        if(idx==0) cout << 0;
        }else{ 
            int c;
            cin >>c;
            for(int j=b-1; j<c; j++) cout << arr[j] << " ";
    }
    cout << endl;
    }
    return 0;
}