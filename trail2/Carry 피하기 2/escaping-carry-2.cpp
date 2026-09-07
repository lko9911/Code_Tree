#include <iostream>
#include <climits>

using namespace std;

int n;
int arr[20];

bool check(int x,int y,int z){
    while(x >0 || y>0 || z>0){
        int xd = x % 10;
        int yd = y % 10;
        int zd = z % 10;
        if(xd + yd + zd >= 10) return false; 

        x /= 10;
        y /= 10;
        z /= 10;
    }
    return true;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int answer = -1;
    for (int i = 0; i < n-2; i++){
        for (int j = i+1; j < n-1; j++){
            for (int k = j+1; k < n; k++){
                if(check(arr[i],arr[j],arr[k]))
                answer = max(answer, arr[i]+arr[j]+arr[k]);
            }
        }
    }

    cout << answer;

    return 0;
}