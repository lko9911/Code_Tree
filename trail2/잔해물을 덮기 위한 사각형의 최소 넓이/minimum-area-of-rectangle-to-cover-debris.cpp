#include <iostream>
using namespace std;

#define OFFSET 1000
int arr[2000][2000];
int result[2000][2000];

int main() {
    int x_1,x_2,y_1,y_2;
    cin >> x_1 >> y_1 >> x_2 >> y_2;
    for(int i=x_1+OFFSET; i<x_2+OFFSET; i++){
        for(int j=y_1+OFFSET; j<y_2+OFFSET; j++)
            arr[i][j]++;
    }

    int x2_1,x2_2,y2_1,y2_2;
    cin >> x2_1 >> y2_1 >> x2_2 >> y2_2;

    for(int i=x2_1+OFFSET; i<x2_2+OFFSET; i++){
        for(int j=y2_1+OFFSET; j<y2_2+OFFSET; j++)
            arr[i][j]=0;
    }

    int min_x = 2000, max_x = -2000, max_y = -2000, min_y = 2000;
    for(int i=0; i<2000; i++){
        for(int j=0; j<2000; j++)
            if(arr[i][j]!=0){
                if(max_x <= i) max_x = i;
                if(max_y <= j) max_y = j;
                if(min_x >= i) min_x = i;
                if(min_y >= j) min_y = j;
            }
    }

    
    for(int i=min_x; i<=max_x; i++){
        for(int j=min_y; j<=max_y; j++)
            result[i][j]++;
    }

    int area=0;

    for(int i=0; i<=2000; i++){
        for(int j=0; j<2000; j++)
            if(result[i][j] != 0) area++;
    }

    cout << area;

    return 0;
}