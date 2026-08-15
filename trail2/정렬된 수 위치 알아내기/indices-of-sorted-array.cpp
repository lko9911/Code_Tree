#include <iostream>
#include <algorithm>
using namespace std;

class Cord{    
    public:
        int number,idx;

    Cord(int number, int idx){
        this-> number=number;
        this-> idx = idx;
    }
    Cord(){};
};

bool cmp(Cord a,Cord b){
    if(a.number == b.number) return a.idx < b.idx;
    return a.number < b.number;
}

int main() {
    int n, idx=1;
    Cord arr[1000];

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i].number;
        arr[i].idx = idx++;
    }

    sort(arr, arr+n, cmp);
    int count[10000];

    int cnt=1;
    for(int i=1; i<=n; i++){
        count[arr[i-1].idx] = cnt++;
    }

    //sort(count,count+n);

    for(int i=1; i<=n; i++){
        cout << count[i] << " ";
    }


    
    return 0;
}