#include <iostream> 
using namespace std; 
#define MAX 200000 

int arr_b[MAX]; int arr_w[MAX]; 
char color[MAX]; 

int main() { 
    int n, idx = 100000; 
    cin >> n; 

    for(int i=0; i<n; i++){ 
    int number; 
    char c; 
    cin >> number >> c;
    if(c=='R'){ 
        for(int j=0; j<number; j++){ 
            arr_b[idx+j]++; 
            color[idx+j] = 'b'; 
            } 
            idx +=number -1; 
        }
    else if(c=='L'){ 
        for(int j=0; j<number; j++){ 
        arr_w[idx-j]++; 
        color[idx-j] = 'w'; 
        } 
        idx -=number -1; 
        } 
    } 
    
    for(int i=0; i<200000; i++){ 
    if(arr_w[i]>=2 && arr_b[i]>=2) 
    color[i] = 'g'; 
    } 

    int cnt_w=0, cnt_b=0, cnt_g=0; 
    for(int i=0; i<200000; i++){ 
        if(color[i]=='w') cnt_w++; 
        if(color[i]=='b') cnt_b++; 
    if(color[i]=='g') cnt_g++; 
    } 

    cout << cnt_w << " " << cnt_b << " " << cnt_g; 

return 0; 
}