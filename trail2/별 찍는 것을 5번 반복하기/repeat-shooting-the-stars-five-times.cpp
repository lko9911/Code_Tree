#include <iostream>
using namespace std;

void Print10Star(){
    for(int i=0; i<10; i++){
        cout << "*";
    }
}

int main() {
    for(int j=0; j<5;j++){
        Print10Star();
    cout << endl;
    }
    return 0;
}