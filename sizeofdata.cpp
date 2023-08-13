#include <iostream>
using namespace std;

int main()
{
    // sizeof() opeartor used to get size of data 
    cout << "Size of char:" << sizeof(char) << endl;         // endl which inserts a new-line character after every line
    cout << "Size of int:" << sizeof(int) << endl;
    cout << "Size of short int:" << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    return 0;

}
