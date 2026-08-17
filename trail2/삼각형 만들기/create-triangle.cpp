#include <iostream>
#include <climits>
using namespace std;

int cord[100][2];

int main() {
    int n;

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> cord[i][0] >> cord[i][1];
    }
    bool flage = false;
    int ans = INT_MIN;
    for(int i=0; i<n-2; i++)
        for(int j=i+1; j<n-1; j++){
            int area=INT_MIN;
            for(int k=j+1; k<n; k++){
                if(cord[i][1] == cord[j][1] && (cord[i][0] == cord[k][0] || cord[j][0] == cord[k][0])){
                flage = true;
                area = abs(cord[i][0] - cord[j][0]) * abs(cord[i][1] - cord[k][1]);
                ans = max(ans, area);
                }
                else if(cord[i][1] == cord[k][1] && (cord[i][0] == cord[j][0] || cord[k][0] == cord[j][0])){
                flage = true;
                area = abs(cord[i][0] - cord[k][0]) * abs(cord[k][1] - cord[j][1]);
                ans = max(ans, area);
                } else if(cord[j][1] == cord[k][1] && (cord[j][0] == cord[i][0] || cord[k][0] == cord[i][0])){
                flage = true;
                area = abs(cord[j][0] - cord[k][0]) * abs(cord[j][1] - cord[i][1]);
                ans = max(ans, area);
            }
        }
        }

    if(flage) cout << ans;
    else cout << 0;
                

    return 0;
}