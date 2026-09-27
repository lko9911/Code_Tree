#include <iostream>

using namespace std;

int a, b, c, d;
bool clean[101];

int main() {
    cin >> a >> b;
    cin >> c >> d;

    for(int i=0; i<=100; i++){
        clean[i] = false;
    }

    for(int i=a; i<b; i++){
        clean[i] = true;
    }

    for(int i=c; i<d; i++){
        clean[i] = true;
    }

    int answer = 0;

    for(int i=0; i<=100; i++){
        if(clean[i]==true) answer++;
    }

    cout << answer;

    return 0;
}