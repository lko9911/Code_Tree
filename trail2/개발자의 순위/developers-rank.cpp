#include <iostream>

using namespace std;

int k, n;
int arr[10][20];
int ranking[10][20];

int main() {
    cin >> k >> n;

    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++) cin >> arr[i][j];

    int cnt=0;

    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++){
            ranking[i][arr[i][j]] = cnt;
            cnt++;
        } 

    int answer=0;
    
    for(int a = 1; a<=n; a++){
        for(int b = 1; b<=n; b++){
            if(a==b) continue;

            bool higher = true;
            for(int m=0; m<k; m++){
                if(ranking[m][a] < ranking[m][b]){
                    higher = false;
                }
            }
            if(higher) answer++;
        }
    }

    cout << answer;
    return 0;
}