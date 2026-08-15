#include <iostream>
#include <algorithm>
using namespace std;

class Cord{
    public:
        int x,y,idx;
        Cord(int x, int y, int idx){
            this -> x = x;
            this -> y = y;
            this -> idx = idx;
        } 
        Cord(){};
};

bool cmp(Cord a, Cord b){
    if(a.x + a.y == b.x + b.y) return a.idx < b.idx; 
    return a.x+a.y < b.x+ b.y;
}

int main() {
    int n, idx=1;
    cin >> n;

    Cord cord[1000];

    for(int i=0; i<n; i++){
        cin >> cord[i].x >> cord[i].y;
        cord[i].idx = idx++;

    if(cord[i].x < 0) cord[i].x = -cord[i].x;
    if(cord[i].y < 0) cord[i].y = -cord[i].y;

    }

    sort(cord, cord+n, cmp);

    for(int i=0; i<n; i++){
        cout  << cord[i].idx << endl;
    }



    return 0;
}