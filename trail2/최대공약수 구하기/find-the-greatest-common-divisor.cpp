#include <iostream>
using namespace std;

void problem(int n, int m){
    int result;
    for(int i=1; i<=m; i++)
        if(n%i==0 && m%i==0) result = i;
    
    cout << result;
}

int main() {
    int n,m;
    cin >> n >> m;
    problem(n,m);

    return 0;
}