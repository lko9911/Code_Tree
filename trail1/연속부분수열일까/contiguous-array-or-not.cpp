#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++)
    cin >> a[i];

    for(int i=0; i<m; i++)
    cin >> b[i];

    bool check=false;

    for(int j=0; j<n; j++){
        if(a[j]==b[0])
            for(int i=1; i<m; i++)
                if(a[j+i] != b[i]) {
                    check = false;
                    break;
                }
                else check=true; 
        
    if(check==true) break;
    }

    cout << (check ? "Yes" : "No");

    return 0;
}