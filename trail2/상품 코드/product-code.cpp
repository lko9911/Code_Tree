#include <iostream>
using namespace std;

class product{
    public:
        string name;
        int code;
        product(string name="codetree", int code = 50){
            this->name = name;
            this->code = code;
        }
};

int main() {
    string n;
    int c;
    cin >> n >> c;
    product p1 = product();
    product p2 = product(n,c);

    cout << "product " << p1.code << " is " << p1.name << endl;
    cout << "product " << p2.code << " is " << p2.name << endl;
    return 0;
}