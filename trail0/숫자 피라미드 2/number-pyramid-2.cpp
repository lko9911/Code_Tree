#include <iostream>
using namespace std;

int main() {
   int n, num=0;
   cin >> n;

   for(int i=1; i<=n; i++){
    for(int j=1; j<=i ; j++){
        num++;
        cout << num << " ";
    }
    cout << "\n";
   }
    return 0;
}