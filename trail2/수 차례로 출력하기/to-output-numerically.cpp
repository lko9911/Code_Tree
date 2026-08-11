#include <iostream>
using namespace std;

int n;

void PrintStar(int a){
    if(a==0) return;

    cout << n-a+1 << " ";  
    PrintStar(a-1);
}

void PrintStar2(int a){
    if(a==0) return;

    cout << a << " ";  
    PrintStar2(a-1);
}


int main() {

    cin >> n;
    PrintStar(n);
    cout << endl;
    PrintStar2(n);
    return 0;
}