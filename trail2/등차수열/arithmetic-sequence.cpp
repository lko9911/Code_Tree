#include <iostream>

using namespace std;

int n;
int a[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int answer = 0;

    for(int k=1; k<=100; k++){
    int cnt=0;
        for (int i = 0; i < n-1; i++){
            for (int j = i+1; j < n; j++){
                if((a[j]-k)==(k-a[i])) cnt++;
            }
        }
        answer = max(answer,cnt);
    }
    
    cout << answer;

    return 0;
}