#include <iostream>

using namespace std;

#define OFFSET 1000

int x1[3], y1[3];
int x2[3], y2[3];

int arr[2000][2000];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    for(int k=0; k<3; k++){
        for(int i=x1[k]+OFFSET; i<x2[k]+OFFSET; i++)
            for(int j=y1[k]+OFFSET; j<y2[k]+OFFSET; j++)
            if(k==2)
                arr[i][j]=0;
                else arr[i][j]=1;

    }
/*
    int min_x=2000, max_x=-2000, min_y=2000, max_y=-2000;
     for(int i=0; i<2000; i++)
            for(int j=0; j<2000; j++)
                if(arr[i][j]!=0){
                    if(min_x > i) min_x = i;
                    if(min_y > j) min_y = j;
                    if(max_x < i) max_x = i;
                    if(max_y < j) max_y = j;
                }
  

    for(int i=min_x; i<=max_x; i++)
            for(int j=min_y; j<=max_y; j++)
                arr[i][j] = 1;
    
    for(int i=x1[2]+OFFSET; i<x2[2]+OFFSET; i++)
            for(int j=y1[2]+OFFSET; j<y2[2]+OFFSET; j++)
                arr[i][j] = 0;
*/
    int cnt=0;

     for(int i=0; i<2000; i++)
            for(int j=0; j<2000; j++)
                if(arr[i][j]!=0) cnt++;
    
    cout << cnt;
    
    return 0;
}