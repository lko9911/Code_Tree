#include <iostream>
#include <climits>
using namespace std;

int work[1000][2];
int n,c,g,h;

int result(int t){
    int result =0;
    for(int i=0; i<n; i++){
        if(t<work[i][0]) result += c;
        else if(t>=work[i][0] && t <=work[i][1]) result +=g;
        else result += h;
    }

    return result;
}

int main() {

    int T_min = INT_MAX, T_max = INT_MIN;
    cin >> n >> c >> g >> h;

    for(int i=0; i<n; i++){
        int t_a, t_b;
        cin >> t_a >> t_b;

        work[i][0] = t_a;
        work[i][1] = t_b;

        T_min = min(T_min,t_a);
        T_max = max(T_max,t_b);
    }

    int ans = INT_MIN;

    for(int t=-1; t<=1001; t++){
        ans = max(ans, result(t));
    }
    
    cout << ans;

    return 0;
}