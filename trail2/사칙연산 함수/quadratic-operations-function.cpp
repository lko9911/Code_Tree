#include <iostream>
using namespace std;

void function(int x, int y, char w){
    if(w=='+') cout << x << " + " << y << " = " << x+y;
    else if(w=='-') cout << x << " - " << y << " = " << x-y;
    else if(w=='*') cout << x << " * " << y << " = " << x*y;
    else if(w=='/') cout << x << " / " << y << " = " << x/y;
    else cout << "False";
}

int main() {
    int x,y;
    char w;

    cin >> x >> w >> y;
    function(x,y,w);

    return 0;
}