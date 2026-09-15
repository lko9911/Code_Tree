#include <iostream>

using namespace std;

int n;
int h[100];
int h_new[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int answer = 0;
    for(int s=0; s<=1000; s++){
        int cnt = 0;
        for (int i = 0; i < n; i++) h_new[i] = h[i];

        for (int i = 0; i < n; i++){
            h_new[i] -= s;
            if(h_new[i] <=0) h_new[i] = 0;
        }
        
        for (int i = 0; i < n; i++){
            if(h_new[i]){
                if(i==0 || h_new[i-1]==0) cnt++;
            }
        }
        answer = max(answer,cnt);
    }

    cout << answer;

    return 0;
}