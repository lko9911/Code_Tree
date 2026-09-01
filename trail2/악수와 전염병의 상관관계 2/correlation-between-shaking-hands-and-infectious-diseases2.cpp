#include <iostream>
#include <algorithm>

using namespace std;

int N, K, P, T;
int t[250];
int x[250];
int y[250];

int con[250];
int a[250];

int main() {
    cin >> N >> K >> P >> T;

    con[P-1] = K;
    a[P-1] = 1;

    for (int i = 0; i < T; i++) {
        cin >> t[i] >> x[i] >> y[i];
    }

    for(int i=0; i< T-1; i++){
        for(int j=i+1; j < T; j++){
            if(t[i] > t[j]){
                swap(x[i], x[j]);
                swap(y[i], y[j]);
                swap(t[i], t[j]);
            }
        }
    }

    for (int i = 0; i < T; i++) {
        int X = x[i] - 1;
        int Y = y[i] - 1;

        bool canX = (a[X] == 1 && con[X] > 0);
        bool canY = (a[Y] == 1 && con[Y] > 0);

        if(canX && a[Y]==0){
            a[Y] = 1;
            con[Y] = K;
        }

        if(canY && a[X]==0){
            a[X] = 1;
            con[X] = K;
        }

        if(canX){
            con[X]--;
        }

        if(canY){
            con[Y]--;
        }

    }

    for (int i = 0; i < N; i++) {
        cout << a[i];
    }
    
    return 0;
}