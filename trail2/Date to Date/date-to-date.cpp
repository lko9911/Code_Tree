#include <iostream>
using namespace std;

int m2d(int m){
    if(m == 4 || m== 6 || m == 9 || m == 11)
        return 30;
    if (m==2) return 28;
    return 31;
}

int main() {
    int m_1,d_1,m_2,d_2, total_1=0, total_2=0;
    cin >> m_1 >> d_1 >> m_2 >> d_2;

    for(int i=1; i<m_1; i++){
        total_1 +=m2d(i);
    }

    for(int i=1; i<m_2; i++){
        total_2 +=m2d(i);
    }

    total_1 += d_1;
    total_2 += d_2;

    cout << total_2 - total_1 +1;

    return 0;
}