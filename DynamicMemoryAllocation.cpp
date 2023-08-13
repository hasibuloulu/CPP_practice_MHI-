#include <iostream>
using namespace std;

int main()
{
    // Declare an int pointer
    int *pointInt;           // int* pointInt;

    // declare a float pointer
    float *pointFloat;             // float* pointFloat

    int pointIntAddress, pointFloatAddress;

    // Dynamically allocate memory
    pointInt = new int;
    pointFloat = new float;

   
    //assigning value to memory
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << "  address:" << &*pointInt  << endl;
    cout << *pointFloat << "  address:" << &*pointFloat  << endl;

    // dealocate memory
    delete pointInt;
    delete pointFloat;

    return 0;

}