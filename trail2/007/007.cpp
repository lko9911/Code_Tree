#include <iostream>
using namespace std;

class Code{
    public:
        string a;
        char b;
        int c;

        Code(string a, char b, int c){
            this->a =a;
            this->b =b;
            this->c =c;
        }
};

int main() {
    string s;
    char b;
    int c;

    Code one = Code(s,b,c);
    cin >> one.a >> one.b >> one.c;
    cout << "secret code : " << one.a << endl;
    cout << "meeting point : " << one.b << endl;
    cout << "time : " << one.c << endl;

    return 0;
}