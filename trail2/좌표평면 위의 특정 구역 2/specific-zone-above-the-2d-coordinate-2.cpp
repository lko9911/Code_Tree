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
    
    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        int area;
         int x_min=INT_MAX, x_max=INT_MIN, y_min=INT_MAX, y_max=INT_MIN;
         
        for(int j=0; j<n; j++){
            if(i==j) continue;
            x_min = min(x_min, cord[j][0]);
            x_max = max(x_max, cord[j][0]);
            y_min = min(y_min, cord[j][1]);
            y_max = max(y_max, cord[j][1]);
            
            area = (x_max - x_min) * (y_max - y_min);
        }
        ans = min(ans,area);
    }

    cout << ans;
    return 0;
}