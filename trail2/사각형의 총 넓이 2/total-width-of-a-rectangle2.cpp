#include <iostream>
using namespace std;

#define OFFSET 100

int arr[200][200];

int main() {
    int n,a;
    
    cin >> n;
    a=n;
    while(n--){
        int x_1,x_2,y_1,y_2;
        cin >> x_1 >> y_1 >> x_2 >> y_2;
        for(int i=x_1 + OFFSET; i<x_2+ OFFSET; i++){
            for(int j=y_1 + OFFSET; j<y_2+ OFFSET; j++)
            arr[i][j]++;
        }
    }

    int cnt=0;

    for(int i=0; i<200; i++){
            for(int j=0; j<200; j++)
            if(arr[i][j]>=1) cnt++;
        }

    cout << cnt;

    return 0;
}