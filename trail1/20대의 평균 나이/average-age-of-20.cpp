#include <iostream>
using namespace std;

int main() {
    int cnt =0;
    int sum=0;
    while(1){
        int age;
        cin >> age;

        if(age > 29 || age < 20)
            break;
        cnt++;
        sum +=age;
    }
     cout << fixed;
     cout.precision(2);
     cout << (double)sum/cnt; 
    return 0;
}