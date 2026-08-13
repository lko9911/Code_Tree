#include <iostream>
using namespace std;

class code{
    public:
        string c;
        char color;
        int second;
        code(string c, char color, int second){
            this-> c = c;
            this-> color = color;
            this-> second = second;
        }
        code(){};
};

int main() {
    string c;
    char a;
    int b;
    cin >> c >> a >> b;
    code code(c,a,b);

    cout << "code : " << code.c << endl;
     cout << "color : " << code.color << endl;
      cout << "second : " << code.second << endl;

    return 0;
}