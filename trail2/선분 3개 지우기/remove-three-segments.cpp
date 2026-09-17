#include <iostream>

using namespace std;

int n;
int l[10], r[10];
int place[101];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    int answer = 0;
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<=n-1; j++){
            for(int k=j+1; k<n; k++){
                for(int a=0; a<=101; a++) place[a] = 0;

                for(int m=0; m<n; m++){
                    if(m==i || m==j || m==k) continue;
                    for(int a=l[m]; a<=r[m]; a++) place[a]++;
                }
                
                bool possible = true;
                for(int a=0; a<=101; a++){
                    if(place[a]>1) possible = false;
                }

                if(possible) answer++;

            }
        }
    }

    cout << answer;

    return 0;
}