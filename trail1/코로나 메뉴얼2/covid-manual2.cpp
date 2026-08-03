#include <iostream>
using namespace std;

int main() {
    char y[3];
    int n[3], count[4]={};

    for(int i=0; i<3; i++){
        cin >> y[i] >> n[i];
    }

    for(int i=0; i<3; i++){
        if(y[i]=='Y' && n[i]>=37) count[0]++;
        else if(y[i]=='N' && n[i]>=37) count[1]++;
        else if(y[i]=='Y' && n[i]<37) count[2]++;
        else count[3]++;
    }

    cout << count[0] << " " << count[1] << " " << count[2] << " " << count[3] << " " << (count[0] >=2 ? 'E' : ' ');

    return 0;
}