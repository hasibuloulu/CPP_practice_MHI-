#include<iostream>
using namespace std;

int main()
{
    float arr[3];

    // declare pointer variable
    float *ptr;

    // use for_loop to print addressses of the all array elements
    cout << "Displaying address using array: " << endl;
    for (int i; i<3; ++i)
    {
        cout << "&arr[ " << i << "] = " << &arr[i] << endl;
    }

    // declare address using pointer 
    ptr = arr;

    // use for loop to print addresses of all array elements (using pointer notation)
    cout<<"\nDisplaying address using pointers: "<< endl;
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    return 0;

}