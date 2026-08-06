#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    int max = 0, min=0;

    if(s1.length() > s2.length() && s1.length() > s3.length()) max = s1.length();
    else if(s2.length() > s1.length() && s2.length() > s3.length()) max = s2.length();
    else max = s3.length();

    if(s1.length() < s2.length() && s1.length() < s3.length()) min = s1.length();
    else if(s2.length() < s1.length() && s2.length() < s3.length()) min = s2.length();
    else min = s3.length();

    cout << max-min;

    return 0;
}