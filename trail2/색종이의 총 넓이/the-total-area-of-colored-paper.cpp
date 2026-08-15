#include <iostream>

using namespace std;

int N;
int x[100], y[100];

#define OFFSET 100

int arr[200][200];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    for(int k=0; k< N; k++)
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
        arr[x[k]+i+OFFSET][y[k]+j+OFFSET]++;
    }   

    int cnt=0;

    for (int i = 0; i < 200; i++) {
    for (int j = 0; j < 200; j++)
        if(arr[i][j]!=0) cnt++;

    }
     
    cout << cnt;
    return 0;
}