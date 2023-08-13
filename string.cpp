#include <iostream>
using namespace std;

int main() {
    string s1, s2, str = "C++ Programming";

    cout << "Enter string s1: ";
    getline (cin, s1);
    s2 = s1;

    cout << "s1 = "<< s1 << endl;
    cout << "s2 = "<< s2;

    // you can also use str.length()
    cout << "String Length = " << str.size();

    return 0;
}