#include<iostream>
using namespace std;

// funciton delaration
int max(int num1, int num2);

int main()
{
    // local variable declaration
    int a = 100;
    int b = 200;
    int ret;

    // calling a function to get max value
    ret = max(a, b);
    cout << "Max vlaue in : " << ret  << endl;

    return 0;
}


// function returning the max between two numbers
int max(int num1, int num2)
{
    // local veriable declaration
    int result;

    if (num1> num2)
        result = num1;
    else 
        result = num2;

    return result;
}