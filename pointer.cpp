#include<iostream>
using namespace std;
// A pointer is a variable whose value is the address of another variable 

int main()
{
    int var = 20;    // actual variable declaration
    int *ip;          // pointer variable 
    ip = &var;       // store address of var in pointer variable

    cout << "value of var variable: " << var << endl;
    cout << "Address stored in IP pointer variable: " << ip << endl;
    cout << "value at  the address (*ip variable:) available in pointer: " << *ip << endl;
}

/*
// Access the Element using pointer

#include<iostream>
using namespace std;

int main()
{
    int data[5];
    cout << "Enter Elements:";

    for(int i=0, i<5; ++i)
    cin>> data[i];

    cout << "You Entered: ";
    for (int i= 0; i<5; ++i)
    cout << endl << *(data + i);

    return 0;
}
*/