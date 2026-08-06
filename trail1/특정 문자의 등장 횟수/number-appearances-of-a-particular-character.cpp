#include <iostream>
using namespace std;

int main() {
    string s;
    int ee=0, eb=0;

    cin >> s;

    for(int i=0; i<s.length()-1; i++)
        if(s.substr(i,2)=="ee") ee++;
        else if(s.substr(i,2)=="eb") eb++;

    cout << ee << " " << eb;

    return 0;
}