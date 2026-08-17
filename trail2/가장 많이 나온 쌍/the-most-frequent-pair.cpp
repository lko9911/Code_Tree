#include <iostream>
using namespace std;

int a[100], b[100];

int main() {
    int n,m;
    cin >> n >> m;

    int cnt = 0;
    for(int i=0; i<m; i++){
        cin >> a[i] >> b[i];
    }

    int ans = 0;
    for(int i=0; i<m; i++){
        cnt = 0;
        for(int j=0; j<m; j++){
            if((a[i]==b[j] && b[i]==a[j]) || (a[i]==a[j] && b[i]==b[j])) cnt++;
        }
    ans = max(ans,cnt);
    }

    cout << ans;
    return 0;
}