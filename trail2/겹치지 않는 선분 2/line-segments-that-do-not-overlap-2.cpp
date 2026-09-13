#include <iostream>

using namespace std;

int N;
long long x1[100], x2[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> x2[i];
    }

    int cnt = 0;
    for(int i=0; i<N; i++){
        bool possible = true;
        for(int j=0; j<N; j++){
            if(i==j) continue;

            if((x1[i]-x1[j])*(x2[i]-x2[j])<0) {
                possible = false;
            }
        }
        
        if(possible) cnt++;
    }

    cout << cnt;
    return 0;
}