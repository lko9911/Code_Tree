#include <iostream>

using namespace std;

#define OFFSET 1000
int arr[2000][2000];

int n;
int x1[10], y1[10];
int x2[10], y2[10];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }
    
    for(int k=0; k<n; k++){
    for(int i=x1[k] + OFFSET; i<x2[k] + OFFSET; i++)
        for(int j=y1[k] + OFFSET; j<y2[k] + OFFSET; j++)
        if(k%2==0)
        arr[i][j]=1;
        else 
        arr[i][j]=2;
    }

    int result=0;
    for(int i=0; i<2000; i++){
        for(int j=0; j<2000; j++)
        if(arr[i][j]==2) result++;
    } 

    cout << result;
    

    return 0;
}