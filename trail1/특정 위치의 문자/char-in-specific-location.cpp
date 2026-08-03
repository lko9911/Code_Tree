#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'L','E','B','R','O','S'};
    char c;
    int flage=0;
    cin >>c;
    for(int i=0; i<6; i++){
        if(arr[i]==c){
        flage=1;
        cout << i;
        }
    }

    if(flage==0) cout << "None";


    return 0;
}