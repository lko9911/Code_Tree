#include <iostream>
#include <string>
using namespace std;

int main() {
    string c1,c2;

    getline(cin,c1);
    getline(cin,c2);
    
    for(int i=0; i<c1.length(); i++){
        if(c1[i]==' ')
        continue;
        cout << c1[i];
    }

    for(int i=0; i<c2.length(); i++){
        if(c2[i]==' ')
        continue;
        cout << c2[i];
    }

    return 0;
}