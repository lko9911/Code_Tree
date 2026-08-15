#include <iostream>
using namespace std;

int m2d(int month){
    if(month == 2) return 28;
    if(month == 4 || month == 6 || month == 9 || month == 11) return 30;
    else return 31;
}

void check(int a, int b){
    int ref = b - a;

    if(ref >0){
    if(ref%7 == 0) cout  << "Mon";
    else if(ref%7 == 1) cout << "Tue";
    else if(ref%7 == 2) cout << "Wed";
    else if(ref%7 == 3) cout << "Thu";
    else if(ref%7 == 4) cout << "Fri";
    else if(ref%7 == 5) cout << "Sat";
    else cout << "Sun";
    }
    else {
        ref = -ref;
        if(ref%7 == 0) cout  << "Mon";
    else if(ref%7 == 1) cout << "Sun";
    else if(ref%7 == 2) cout << "Sat";
    else if(ref%7 == 3) cout << "Fri";
    else if(ref%7 == 4) cout << "Thu";
    else if(ref%7 == 5) cout << "Wed";
    else cout << "Tue";
    }
}

int main() {
    int m1,m2,d1,d2, total_day_1=0, total_day_2=0;
    cin >> m1 >> d1 >> m2 >> d2;

    for(int i=1; i<m1; i++){
        total_day_1 += m2d(i);
    }

    for(int i=1; i<m2; i++){
        total_day_2 += m2d(i);
    }
    total_day_1 += d1;
    total_day_2 += d2;

    check(total_day_1,total_day_2);

    return 0;
}