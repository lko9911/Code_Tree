#include <iostream>

using namespace std;

int N;
int a1, b1, c1;
int a2, b2, c2;

bool check(int x, int y){
    int d =abs(x-y);
    d = min(d,N-d);
    return d<=2;
}

int main() {
    cin >> N;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    int cnt=0;

    for(int x=1; x<=N; x++){
        for(int y=1; y<=N; y++){
            for(int z=1; z<=N; z++){
            bool first = check(x,a1) && check(y,b1) && check(z,c1);
            bool second = check(x,a2) && check(y,b2) && check(z,c2);
            if(first || second) cnt++;
            }
        }
    }

    cout << cnt;

    

    return 0;
}